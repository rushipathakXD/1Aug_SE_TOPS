#Print multiplication table of given number e.g 5 output 5*1=5 ..... 5*10 = 50
num = int(input("Enter a number whose table you want to print: "))

for i in range(1,11):
    print(f"{num} * {i} = {num*i}")