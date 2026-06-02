// 3. Check Armstrong Number

def is_armstrong(num):
    digits = len(str(num))
    temp = num
    total = 0

    while temp > 0:
        digit = temp % 10
        total += digit ** digits
        temp //= 10

    return total == num


num = int(input("Enter a number: "))

if is_armstrong(num):
    print(num, "is an Armstrong Number")
else:
    print(num, "is not an Armstrong Number")