def is_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6
    return True


def generate_primes(n):
    prime_count = 0
    num = 2
    primes = []
    while prime_count < n:
        if is_prime(num):
            primes.append(num)
            prime_count += 1
        num += 1
    return primes


n = int(input("Enter the value of n: "))
print("First", n, "prime numbers are:", generate_primes(n))
