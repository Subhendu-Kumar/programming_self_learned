# Euclid's algorithm for finding gcd;

# example-- gcd(12 , 33) = ?
#     Ans--
#         ---------------------------------
#         |   Q   |   A   |   B   |   R   |
#         ---------------------------------
#         |   2   |  33   |  12   |   9   |   Q = (A / B); R= (A % B);
#         ---------------------------------
#         |   1   |  12   |   9   |   3   |   Now A = B; & B = R;
#         ---------------------------------
#         |   3   |   9   |   3   |   0   |   Again A = B; & B = R;
#         ---------------------------------
#         |   X   |   3   |   0   |   X   |   Again A = B; & B = R;
#         ---------------------------------
#                     ^
#                     |
#                 gcd(12 , 33);

# After all these calculation when B = 0, gcd(12 , 33) = A; (ans is 3).


def GCD(a, b):
    if b == 0:
        return a
    else:
        return GCD(b, a % b)


A = int(input("Enter the no. A: "))
B = int(input("Enter the no. B: "))

gcd = GCD(A, B)

print("GCD of", A, "&", B, "is:", gcd)
