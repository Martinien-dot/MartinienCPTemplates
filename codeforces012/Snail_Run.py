import sys
import math
from collections import deque

number_snails = int(input())
speeds = []
for i in range(number_snails):
    speed_snail = int(input())
    speeds.append(speed_snail)
map_height = int(input())
map_width = int(input())
mp = {}
carte = []
for i in range(map_height):
    row = input()
    carte.append(list(row))
    for j in range(map_width):
        if row[j].isdigit():
            mp[int(row[j])]  = [i,j]

directions = [(0,1),(1,0),(-1,0),(0,-1)]

def bfs(start_i: int, start_j: int, carte, speed) -> int:
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    map_height, map_width = len(carte), len(carte[0])
    visited = [[False] * map_width for _ in range(map_height)]
    queue = deque([(start_i, start_j, 0)])
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
    return -1 
temp = 10000000000000000

for c in mp:
    [i,j] = mp[c]
    a = bfs(i,j,carte,speeds[c-1])
    if a<temp:
        res = c
        temp = a
print(res)
