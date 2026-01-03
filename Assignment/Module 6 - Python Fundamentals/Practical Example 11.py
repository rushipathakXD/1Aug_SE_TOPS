#Practical Example 3: Write a Python program to find a specific string in the list using a simple 
# for loop and if condition.

List1 = ["apple", "banana", "mango", "orange", "grapes", "kiwi", "watermelon"]

userInput = input("Enter a fruit name: ")
found = False
for fruit in List1:
    if(userInput == fruit):
        found = True
        break

if found:
    print(f"{userInput} is there in the List!!")

else:
    print(f"{userInput} is not there in the List")
