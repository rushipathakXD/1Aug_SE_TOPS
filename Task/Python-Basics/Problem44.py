#Write a program to find all perfect numbers from given range
#(Perfect number is positive integer that is equal to the sum of its proper divisors, excluding the number itself.) 
#e.g 6 (divisor is 1,2,3, and sum is 6) 28 (divisors are 1,2,4,7,14 and sum of all divisors are 28)

start = int(input("Enter the Lower Limit of range: "))
end = int(input("Enter the Upper Limit of the Range: "))

for num in range(start, end+1):
    if num>1:
        s = 0
        for i in range(1, num):
            if num % i == 0:
                s = s+i

        if s == num:
            print(f"{num} is a Perfect Number")