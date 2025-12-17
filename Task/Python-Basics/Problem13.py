#Count number of digits in given number (e.g number=23456 o/p digits=5)
"""
num = int(input("Enter a Number: "))
count = 0
if num==0:
    print("Number of digits: 1")

while(num !=0):
    num1 = num%10
    count = count+1
    num//=10
    

print(f"Number of digits: {count}")
"""

                    # OR Use the code below, both are correct

num = input("Enter a Number: ")
count = 0 
for i in range(0,len(num)):
    count = count + 1

print(f"The total number of digits in {num} are: {count}")