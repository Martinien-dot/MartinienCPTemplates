t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    s = s.replace("map", "*")
    s = s.replace("pie","*")
    print(s.count("*"))