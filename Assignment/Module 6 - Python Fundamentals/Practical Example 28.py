# Write a Python program to print every alternate character from the
# string starting from index 1.

def alternateChar(str1):
    for i in range(1,len(str1),2):
        print(str1[i], end="")

str2 = input("Enter a String: ")
alternateChar(str2)