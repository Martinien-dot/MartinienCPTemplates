def merge_sort(array):
    """Tri fusion (Merge Sort)"""
    
    # Cas de base : retourner l'élément unique
    if len(array) <= 1:
        return array
        
    # Diviser le tableau jusqu'à obtenir des parties unitaires
    mid = len(array) // 2
    left = merge_sort(array[:mid])       # Partie gauche
    right = merge_sort(array[mid:])      # Partie droite
                            
    # Conquérir en combinant les parties déjà triées
    merged = []
    i, j = 0, 0               # Indices initiaux pour parcourir respectivement "left" et "right"
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            merged.append(left[i])
            i += 1
        else:
            merged.append(right[j])
            j += 1
    
    # Joindre les restants des parts gauche et droite
    merged.extend(left[i:])
    merged.extend(right[j:])
    
    return merged
arr = [int(i) for i in input().split()]
arr = merge_sort(arr)
print(arr)