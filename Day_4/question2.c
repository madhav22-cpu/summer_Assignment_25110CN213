//2. Find nth Fibonacci Term

def nth_fibonacci(n):
    a, b = 0, 1

    if n == 1:
        return a
    elif n == 2:
        return b

    for _ in range(3, n + 1):
        a, b = b, a + b

    return b


n = int(input("Enter n: "))
print(f"{n}th Fibonacci term =", nth_fibonacci(n))