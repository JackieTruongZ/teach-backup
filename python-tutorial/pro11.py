

n = int(input())
c = input()

for i in range(n) :
    j = 2*i + 1
    t = n - 1 - i
    for k in range (t) :
        print(" ", end = "")
    for k in range(j) : 
        print(c,end = "")
    print()
