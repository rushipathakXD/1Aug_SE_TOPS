#Write a program to find GCD (Greatest Common Divisor) of 2 numbers. 

num1 = int(input("Enter a Number: "))
num2 = int(input("Enter another Number: "))

while(num2!=0):
    num1, num2 = num2, num1%num2

print("GCD = ", num1)