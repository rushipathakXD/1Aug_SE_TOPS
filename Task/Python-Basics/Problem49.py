#Find a longest word in given string E.g "it is another string" output "another"
str1 = input("Enter a String: ")

words = str1.split()
long = words[0]

for i in words:
    if len(i) > len(long):
        long = i

print(f"The longest word is: {long}")