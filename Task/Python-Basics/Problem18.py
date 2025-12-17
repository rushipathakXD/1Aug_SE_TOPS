#Write a program to write series 1/1! + 1/2! + 1/3! + 1/4! ....1/number!

n = int(input("Enter a number: "))
fact = 1
sum_series = 0.0

for i in range(1, n + 1):
    fact *= i
    sum_series += 1 / fact

print("Sum of the series =", sum_series)