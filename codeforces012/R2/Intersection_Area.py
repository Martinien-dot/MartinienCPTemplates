import math

def intersection_area(x1, y1, r1, x2, y2, r2):
    # Calculer la distance carrée entre les centres des cercles
    dx = x2 - x1
    dy = y2 - y1
    d_sq = dx * dx + dy * dy
    r1_sq = r1 * r1
    r2_sq = r2 * r2
    # Vérifier les conditions de non chevauchement
    if d_sq >= (r1 + r2) ** 2:
        return 0  # Les cercles ne se chevauchent pas
    # Vérifier si un cercle est complètement à l'intérieur de l'autre
    if d_sq <= (r1 - r2) ** 2:
        return math.pi * min(r1_sq, r2_sq)  # Un cercle est complètement à l'intérieur de l'autre
    # Distance entre les centres des cercles
    d = math.sqrt(d_sq)

    # Calcul des angles des segments circulaires
    angle1 = 2 * math.acos((d_sq + r1_sq - r2_sq) / (2 * d * r1))
    angle2 = 2 * math.acos((d_sq + r2_sq - r1_sq) / (2 * d * r2))

    # Aire des secteurs circulaires
    sector_area1 = 0.5 * r1_sq * (angle1 - math.sin(angle1))
    sector_area2 = 0.5 * r2_sq * (angle2 - math.sin(angle2))

    # Aire totale d'intersection
    intersection_area = sector_area1 + sector_area2

    return intersection_area



def solve():
    x1, y1, r1 = map(int, input().split())
    x2, y2, r2 = map(int, input().split())
    print(abs(intersection_area(x1,y1,r1,x2,y2,r2)))

if __name__ == "__main__":
    solve()
