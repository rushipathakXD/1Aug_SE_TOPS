#Write a program to print length of string without len function.

userInput = input("Enter a String: ")
count = 0

for i in userInput:
    count = count+1

print(f"Length of {userInput} is {count}.")