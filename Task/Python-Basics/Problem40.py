#Write a program to check given character is vowel or not eg. 'w' output "w is not vowel"
userInput = input("Enter a character: (a-z): ")

new_str = userInput.lower()
match new_str:
    case 'a' : print(f"{userInput} is a vowel")
    case 'e' : print(f"{userInput} is a vowel")
    case 'i' : print(f"{userInput} is a vowel")
    case 'o' : print(f"{userInput} is a vowel")
    case 'u' : print(f"{userInput} is a vowel")
    case _ : print(f"{userInput} is not a vowel")