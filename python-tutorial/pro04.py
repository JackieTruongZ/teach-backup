a = int(input("nhap so a : "))
b = int(input("nhap so b : "))
dau = str(input("nhap dau : "))

if(dau == "cong") : 
    print("a + b =",a+b)
elif (dau == "tru") : 
    print("a - b =",a-b)
elif (dau == "nhan") :
    print("a x b =",a*b)
elif (dau == "chia") :
    print("a : b =", a/b)
else :
    print("khong xac dinh duoc dau")
