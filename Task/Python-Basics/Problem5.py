#Find Compond Interest. Amount = P(1 + R/100) t  Compound Interest = A - P

principle = int(input("Enter the principle amount as a whole number: "))
time = int(input("Enter time in years: "))
rate = float(input("Enter the rate of interest: "))

amount = principle*(1+rate/100)*time
compoundInterest = amount - principle

print(amount)
print(f"The calculated simple interest for amount {principle}, time {time}, rate {rate} is: {compoundInterest} ")