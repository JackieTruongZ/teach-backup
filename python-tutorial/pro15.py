
list = []
n = int(input("nhap so goi keo : "))
sum = 0
sum2 = 0
chenh_lech = 100000 

for i in range(n) :
    j = int(input())
    sum = sum + j
    list.append(j)

print(f"list keo : {list}")
print(f"tong la : {sum}")


for i in range(n) :
    sum2 = sum2 + list[i] 
    sum = sum - list[i]

    print(f"i : {i}, list[{i}] = {list[i]}, sum = {sum} , sum2 = {sum2} , chenh_lech : {abs(sum - sum2)} ")
    if (chenh_lech > abs(sum - sum2)) :
        chenh_lech = abs(sum - sum2)

print(f"chenh_lech la : {chenh_lech}")
