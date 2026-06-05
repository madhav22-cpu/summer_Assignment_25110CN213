// 3. Recursive Sum of Digits
def sum_of_digits(n):
    if n == 0:
        return 0
    return n % 10 + sum_of_digits(n // 10)

n = int(input("Enter a number: "))
print("Sum of digits =", sum_of_digits(n))