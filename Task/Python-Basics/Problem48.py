#Write a program to check if a string is an anagram of another string Eg string 1 = listen string 2 = silent output yes 
# String 1=eleven plus two String 2 = twelve plus one Output Yes 
# String 1 = Hello String 2 = Hallo output No

str1 = input("Enter a string: ").replace(" ","").lower()
str2 = input("Enter another string: ").replace(" ","").lower()

if sorted(str1) == sorted(str2):
    print("The given strings are anagram of each other.")
else:
    print("The given strings are not anagrams of each other.")