from collections import deque

def bfs(start_i: int, start_j: int, carte, speed) -> int:
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    map_height, map_width = len(carte), len(carte[0])
    visited = [[False] * map_width for _ in range(map_height)]
    queue = deque([(start_i, start_j, 0)])  # (i, j, steps)
    visited[start_i][start_j] = True
    
    while queue:
        i, j, steps = queue.popleft()
        
        if carte[i][j] == '#':
            return steps
        
        for x, y in directions:
            for k in range(1, speed + 1):
                xi, yi = i + x * k, j + y * k
                if 0 <= xi < map_height and 0 <= yi < map_width:
                    if not visited[xi][yi]:
                        visited[xi][yi] = True
                        queue.append((xi, yi, steps + 1))
    return -1  # Si aucun chemin n'est trouvé

# Exemple d'utilisation
carte = [
    ['.', '.', '.', '.', '.'],
    ['.', '.', '.', '#', '.'],
    ['.', '.', '.', '.', '.'],
    ['.', '#', '#', '#', '.'],
    ['.', '.', '.', '.', '.']
]
start_i, start_j = 1, 0
speed = 1

result = bfs(start_i, start_j, carte, speed)
print(f"Nombre de pas pour atteindre la cible: {result}")
