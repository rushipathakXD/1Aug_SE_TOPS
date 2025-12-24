#Write a program to count number of vowel and consonant in given string : 
# E.g "Hello" Vowels - 2 and consonants - 3

userInput = input("Enter a String: ")
new_str = userInput.lower()

countV = 0
countC = 0

for i in range(len(new_str)):
    if(new_str[i] == 'a' or new_str[i] == 'e' or new_str[i] == 'i' or new_str[i] == 'o' or new_str[i] == 'u'):
        countV = countV + 1
    else:
        countC = countC + 1

print(f"{userInput} has {countV} vowels and {countC} consonants.")