# Write a Python program to stop the loop once 'banana' is found using
# the break statement.

list1 = ["apple", "mango", "orange","banana", "grapes"]

for i in list1:
    if(i == "banana"):
        break
    else:
        print(i)