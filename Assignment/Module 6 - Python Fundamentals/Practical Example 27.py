# Write a Python program to print a string from the last character.
def revStr(str1):
    for i in range(len(str1)-1,-1,-1):
        print(str1[i], end="")

str2 = input("Enter a String: ")
revStr(str2)