def newtonMethoedSqrt(x, t):
    initialGuess = x / 2
    while True:
        nextGuess = (1 / 2) * (initialGuess + (x / initialGuess))
        if abs(nextGuess - initialGuess) < t:
            break

        initialGuess = nextGuess

    return nextGuess


x = int(input("Enter a number to find sqrt "))
tolerance = 0.00001
sqrt = newtonMethoedSqrt(x, tolerance)
sqrt = round(sqrt, 4)
print("Sruare root of", x, "using newton's method is:", sqrt)
