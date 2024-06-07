
def low_bit(x):
    return x & -x

# Exemple d'utilisation
print(low_bit(12))  # Output: 4 (car 12 en binaire est 1100, et le low bit est 0100)
print(low_bit(18))  # Output: 2 (car 18 en binaire est 10010, et le low bit est 00010)
