

def soUoc(a) :
    i=2
    check= False
    while(i<a):
        if(a%i==0):
            print(i,end=", ")
            check=True
        i=i+1
    if(check==False):
        print("a là số nguyên tố")

soUoc(11)
