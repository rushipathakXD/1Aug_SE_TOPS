#Find maximum number using ternary operator.

num1 = int(input("Enter a number to compare: "))
num2 = int(input("Enter another number to compare: "))

maxNumber = num1 if num1>num2 else num2

print(maxNumber)