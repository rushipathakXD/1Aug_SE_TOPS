#Find frequency of letter from given string
s = input("Enter a string: ")

for ch in set(s):
    if ch.isalpha():
        print(ch, ":", s.count(ch))