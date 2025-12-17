#Print no of digits and letters in String.
# Accept String from user. E.g string="H1Visa" Digits = 1 and letters=5

String = input("Enter a String: ")

digits = 0
letters = 0

for i in String:
    if(i =="0" or i =="1" or i =="2" or i =="3" or i =="4" or i =="5" or i =="6" or i =="7" or i =="8" or i =="9"):
        digits = digits+1
    else:
        letters = letters+1


print(f"Digits: {digits}, Letters: {letters} ")