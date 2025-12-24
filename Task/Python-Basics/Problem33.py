#Print half of String in Uppercase
userInput = input("Enter a String: ")
i = len(userInput) // 2

print(userInput[0:i].upper() + userInput[i:])