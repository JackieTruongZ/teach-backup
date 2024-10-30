def is_perfect(n):
    if n <= 1:
        return False
    sum_divisors = 1
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            sum_divisors += i
            if i != n // i:
                sum_divisors += n // i
    return sum_divisors == n

def find_perfect_numbers(n1, n2):
    perfect_numbers = []
    for num in range(max(2, n1), n2 + 1):
        if is_perfect(num):
            perfect_numbers.append(num)
    return perfect_numbers

# Đọc input
with open("PERFECT.INP", "r") as f:
    n1, n2 = map(int, f.readline().split())

# Tìm số hoàn hảo
result = find_perfect_numbers(n1, n2)

# Ghi output
with open("PERFECT.OUT", "w") as f:
    f.write(f"{len(result)}\n")
    f.write(' '.join(map(str, result)))
