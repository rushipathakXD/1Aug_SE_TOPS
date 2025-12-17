#Write a program to display numbers which are divisible by 13 from given range.

lowerLimit = int(input("Enter the Lower Limit of the range: "))
upperLimit = int(input("Enter the Upper Limit of the range: "))

for i in range(lowerLimit,upperLimit+1):
    if(i % 13 ==0):
        print(i, end=" ")