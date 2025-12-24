#Write a program to remove duplicate characters from String E.g String "Hello" output : "Heo"

str1 = input("Enter a String: ")
result = ""
for i in str1:
    if i not in result:
        result = result + i

print(f"Output: {result}")