import sys

def dijkstra(graph, src):
    V = len(graph)
    dist = [sys.maxsize] * V
    dist[src] = 0
    sptSet = [False] * V

    for _ in range(V):
        u = minDistance(dist, sptSet)
        sptSet[u] = True

        for v in range(V):
            if not sptSet[v] and graph[u][v] and dist[u] + graph[u][v] < dist[v]:
                dist[v] = dist[u] + graph[u][v]

    printSolution(dist)

def minDistance(dist, sptSet):
    min_val = sys.maxsize
    min_index = -1

    for v in range(len(dist)):
        if not sptSet[v] and dist[v] <= min_val:
            min_val = dist[v]
            min_index = v

    return min_index

def printSolution(dist):
    print("Sommet \t Distance de la source")
    for i in range(len(dist)):
        print(i, "\t", dist[i])

# Exemple d'utilisation
graph = [[0, 4, 0, 0, 0, 0, 0, 8, 0],
         [4, 0, 8, 0, 0, 0, 0, 11, 0],
         [0, 8, 0, 7, 0, 4, 0, 0, 2],
         [0, 0, 7, 0, 9, 14, 0, 0, 0],
         [0, 0, 0, 9, 0, 10, 0, 0 ,0],
         [0 ,0 ,4 ,14 ,10 ,0 ,2 ,0 ,0],
         [0 ,0 ,2 ,10 ,10 ,2 ,1 ,6 ,6],
         [8 ,11 ,1 ,6 ,6 ,6 ,7 ,1 ,7],
         [9 ,14 ,2 ,7 ,6 ,6 ,8 ,7 ,9]]

dijkstra(graph, 0)
