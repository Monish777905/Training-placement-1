import cmath

def quadratic_formula(a, b, c):
    discriminant = cmath.sqrt(b**2 - 4*a*c)
    root1 = (-b + discriminant) / (2 * a)
    root2 = (-b - discriminant) / (2 * a)
    return root1, root2

a, b, c = map(float, input("Enter coefficients a, b, and c for ax^2 + bx + c = 0: ").split())

root1, root2 = quadratic_formula(a, b, c)

print(f"The roots of the quadratic equation are: {root1} and {root2}")
