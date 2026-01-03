#Practical Example 6: Write a Python program to check if a number is prime using if_else
num=int(input("Enter a Number: "))
count = 0
if(num==1):
    print("1 is not a Prime Number")

elif (num%2 == 0):
    print(f"{num} is not a prime number")

else:
    for i in range(3, int(num**0.5)+1, 2):
        if(num%i == 0):
            count = count + 1
            break
    if(count == 0):
        print(f"{num} is a prime number")
    else:
        print(f"{num} is not a prime number")  