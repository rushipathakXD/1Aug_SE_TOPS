#Print Factorial Series (Accept n from user)

n = int(input("Enter the n for factorial: "))
fact = 1
for i in range (1,n+1):
    fact = fact*i
print(f"The factorial of {n} is {fact}")