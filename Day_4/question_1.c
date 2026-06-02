// Generate Fibonacci Series

def fibonacci_series(n):
    a, b = 0, 1

    print("Fibonacci Series:")
    for _ in range(n):
        print(a, end=" ")
        a, b = b, a + b


n = int(input("Enter number of terms: "))
fibonacci_series(n)