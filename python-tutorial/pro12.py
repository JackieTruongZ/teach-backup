string = "abCdEfG"

for char in string :
    ordChar = ord(char)
    if(65<=ordChar<=90) :
        print(char,end="")
    else :
        ordChar = ordChar - 32
        newChar = chr(ordChar)
        print(newChar,end="")


