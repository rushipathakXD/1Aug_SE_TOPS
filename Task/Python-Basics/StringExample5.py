s1 = input("Enter a String: ")

count = 0
for i in s1:
    if(i in "aeiouAEIOU"):
        count = count + 1


print(count)