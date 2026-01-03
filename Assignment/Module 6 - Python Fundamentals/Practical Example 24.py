# Write a Python program to access the string from the second position
# onwards using slicing.

def StrSlice(str1):
    for i in range(1,len(str1),1):
        print(str1[i],end="")

str2 = input("Enter a String: ")
StrSlice(str2)