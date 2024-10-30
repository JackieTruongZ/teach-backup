
chuoi = input()
list=[]
for i in chuoi : 
    if(len(list) == 0) : 
        list.append(i)
        continue
    check = True
    for j in list : 
        if(i==j) :
            check = False
    if (check == True) :
        list.append(i)
print(list)
