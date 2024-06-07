


def find_common_ancestor(k, ai, bi):
    while ai != bi:
        if ai > bi:
            ai = (ai - 2) // k + 1
        else:
            bi = (bi - 2) // k + 1
    return ai

def distance_to_ancestor(k, node, ancestor):
    dist = 0
    while node != ancestor:
        node = (node - 2) // k + 1
        dist += 1
    return dist

def distance_to_root(k, node):
    dist = 0
    while node > 1:
        node = (node - 2) // k + 1
        dist += 1
    return dist

def cycle_length(k, ai, bi):
    common_ancestor = find_common_ancestor(k, ai, bi)
    dist_ai_to_ancestor = distance_to_ancestor(k, ai, common_ancestor)
    dist_bi_to_ancestor = distance_to_ancestor(k, bi, common_ancestor)
    dist_ancestor_to_root = distance_to_root(k, common_ancestor)
    return dist_ai_to_ancestor + dist_bi_to_ancestor + dist_ancestor_to_root

# Example usage
k = int(input())
t = int(input())
for _ in range(t):
    ai, bi = map(int, input().split())
    print(cycle_length(k, ai, bi))
