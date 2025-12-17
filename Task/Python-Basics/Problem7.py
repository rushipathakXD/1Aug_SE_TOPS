#Convert temperature, degrees Fahrenheit to degrees Celsius and vice versa. 
#C = (5/9) * (F - 32) &  F = C * 9/5 + 32
#Fahrenheit = 0
#Celsius = 0
userInput = input("Enter the unit: Celsius or Fahrenheit: ")
if(userInput == "Celsius"):
    temp = float(input("Enter temperature in Celsius(C): "))
    Fahrenheit = temp * 9/5 + 32
    print(f"{temp}C = {Fahrenheit}F")

elif(userInput == "Fahrenheit"):
    temp = float(input("Enter temperature in Fahrenheit(F): "))
    Celsius = (5/9) * (temp - 32)
    print(f"{temp}F = {Celsius}C")