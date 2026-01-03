# Write a Python program to access a string up to the fifth character.
def accessFifth(str1):
    for i in range(0,5):
        print(str1[i], end="")

str2 = input("Enter a String: ")
accessFifth(str2)