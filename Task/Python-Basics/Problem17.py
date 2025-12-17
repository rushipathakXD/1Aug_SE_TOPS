#Write a program to display number names of entered number e.g number="345" output = Three Four Five

num = input("Enter a number: ")

for i in num:
    if(i=="0"):
        print("Zero",end=" ")
    elif(i=="1"):
        print("One",end=" ")
    elif(i=="2"):
        print("Two",end=" ")
    elif(i=="3"):
        print("Three",end=" ")
    elif(i=="4"):
        print("Four",end=" ")
    elif(i=="5"):
        print("Five",end=" ")
    elif(i=="6"):
        print("Six",end=" ")
    elif(i=="7"):
        print("Seven",end=" ")
    elif(i=="8"):
        print("Eight",end=" ")
    elif(i=="9"):
        print("Nine",end=" ")
else:
    print("Invalid Number!!!")