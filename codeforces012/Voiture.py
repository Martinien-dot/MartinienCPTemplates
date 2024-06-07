import tkinter as tk
import random

# Configuration de la fenêtre principale
root = tk.Tk()
root.title("Jeu de voiture")
root.geometry("400x600")

# Configuration du canevas
canvas = tk.Canvas(root, width=400, height=600, bg="gray")
canvas.pack()

# Initialisation des variables
car_width = 50
car_height = 100
car_x = 175
car_y = 500
car_speed = 20

obstacle_width = 50
obstacle_height = 100
obstacle_speed = 10
obstacles = []

score = 0

# Fonction pour dessiner la voiture
def draw_car():
    global car
    car = canvas.create_rectangle(car_x, car_y, car_x + car_width, car_y + car_height, fill="blue")

# Fonction pour dessiner un obstacle
def create_obstacle():
    x_position = random.randint(0, 350)
    obstacle = canvas.create_rectangle(x_position, -obstacle_height, x_position + obstacle_width, 0, fill="red")
    obstacles.append(obstacle)

# Fonction pour déplacer la voiture
def move_car(event):
    global car_x
    if event.keysym == "Left" and car_x > 0:
        car_x -= car_speed
    elif event.keysym == "Right" and car_x < 350:
        car_x += car_speed
    canvas.coords(car, car_x, car_y, car_x + car_width, car_y + car_height)

# Fonction pour déplacer les obstacles
def move_obstacles():
    global score
    for obstacle in obstacles:
        canvas.move(obstacle, 0, obstacle_speed)
        if canvas.coords(obstacle)[1] >= 600:
            canvas.delete(obstacle)
            obstacles.remove(obstacle)
            score += 1
            update_score()

# Fonction pour vérifier les collisions
def check_collision():
    car_coords = canvas.coords(car)
    for obstacle in obstacles:
        obstacle_coords = canvas.coords(obstacle)
        if (car_coords[2] > obstacle_coords[0] and car_coords[0] < obstacle_coords[2] and
                car_coords[3] > obstacle_coords[1] and car_coords[1] < obstacle_coords[3]):
            return True
    return False

# Fonction pour mettre à jour le score
def update_score():
    canvas.itemconfig(score_text, text="Score: " + str(score))

# Fonction pour le jeu principal
def game_loop():
    if not check_collision():
        move_obstacles()
        root.after(50, game_loop)
    else:
        canvas.create_text(200, 300, text="Game Over", fill="white", font=('Helvetica', 30))

# Dessin initial
draw_car()
score_text = canvas.create_text(10, 10, anchor='nw', text="Score: 0", fill="white", font=('Helvetica', 14))

# Création d'obstacles périodiquement
def create_obstacle_periodically():
    create_obstacle()
    root.after(2000, create_obstacle_periodically)

# Configuration des contrôles
root.bind("<Left>", move_car)
root.bind("<Right>", move_car)

# Lancement du jeu
create_obstacle_periodically()
game_loop()

root.mainloop()
