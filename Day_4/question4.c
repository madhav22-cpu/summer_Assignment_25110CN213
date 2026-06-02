// 4. Print Armstrong Numbers in a Range

def is_armstrong(num):
    digits = len(str(num))
    temp = num
    total = 0

    while temp > 0:
        digit = temp % 10
        total += digit ** digits
        temp //= 10

    return total == num


def armstrong_range(start, end):
    print("Armstrong Numbers:")
    for num in range(start, end + 1):
        if is_armstrong(num):
            print(num)


start = int(input("Enter start of range: "))
end = int(input("Enter end of range: "))

armstrong_range(start, end)