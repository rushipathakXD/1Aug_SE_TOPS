# Write a Python program to insert elements into an empty list using a for loop and append().

lst1 = []

n = int(input("Enter number of elements: "))
for i in range(n):
    element = input("Enter element: ")
    lst1.append(element)

print("List elements:", lst1)
