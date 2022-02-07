def sq(x):
    return x**2

def cube(x):
    return x**3

ls = [sq, cube]

print(ls[0](5))
print(ls[1](5))
