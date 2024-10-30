 
end = "false"

while end == "false" :
    next = input("ban co muon tiep tuc khong : ")

    if(next == 'khong') :
        end = "true"

    else : 
        name = input('nhap ten: ')
        tuoi = input('nhap tuoi: ')
        print( f"{name}, {tuoi}")
