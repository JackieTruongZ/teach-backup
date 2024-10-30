from collections import Counter

s = input()

n = len(s)
cnt = 0
for i in range(n-2):
    window = s[i:i+3]
    if len(set(window)) == 3:
        continue
    else:
        cnt += 1
print(cnt)
