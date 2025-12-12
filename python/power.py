x = int(input("Enter the Base: "))
n = int(input("Enter the Exponent: "))
y = 1

for i in range(n):
    y *= x

print(x, "to the power", n, "is:", y)
