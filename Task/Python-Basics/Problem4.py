#Find simple Interest . SI=(P*T*R)/100

principle = int(input("Enter the principle amount as a whole number: "))
time = int(input("Enter time in years: "))
rate = float(input("Enter the rate of interest: "))

Interest = (principle*time*rate)/100

print(f"The calculated simple interest for amount {principle}, time {time}, rate {rate} is: {Interest} ")