def find_max_sum_pair(numbers, k):
    if len(numbers) < 2:
        return None  # Không đủ số để tạo cặp

    numbers.sort(reverse=True)  # Sắp xếp giảm dần
    
    left, right = 0, 1
    max_sum = 0
    
    while right < len(numbers):
        current_sum = numbers[left] + numbers[right]
        if current_sum <= k + 1:
            return current_sum  # Tìm thấy cặp lớn nhất thỏa mãn
        
        if numbers[left] <= k + 1:
            # Tìm số lớn nhất nhỏ hơn k - numbers[left]
            target = k - numbers[left]
            low, high = right, len(numbers) - 1
            while low <= high:
                mid = (low + high) // 2
                if numbers[mid] <= target:
                    max_sum = max(max_sum, numbers[left] + numbers[mid])
                    break
                high = mid - 1
        
        left += 1
        if left == right:
            right += 1

    return max_sum if max_sum > 0 else None

list = [1, 8, 6, 2, 5, 4, 8, 3, 7]
k = 10

print(find_max_sum_pair(list,k))
