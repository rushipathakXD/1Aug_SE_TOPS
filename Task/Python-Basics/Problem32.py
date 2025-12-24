#Check whether the given number is armstrong or not 
num = int(input("Enter a number: "))
temp = num
rem = 0
count = 0
while(num!=0):
    num = num // 10
    
    count = count+1
    
sum = 0
num = temp
sum1 = 0

while(num!=0):
    rem = num % 10
    sum1 = sum1 + rem ** count
    # sum = sum + sum1
    num = num//10
num = temp
if(num == sum1):
    print(f"{num} is an Armstrong Number")
else:
    print(f"{num} is not an Armstrong Number")