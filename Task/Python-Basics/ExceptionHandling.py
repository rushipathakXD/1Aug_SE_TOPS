try:
    a = int(input("Enter a number: "))
    b = int(input("Enter another number: "))
    result = a / b

except ZeroDivisionError:
    print("Cannot divide by zero!")

except ValueError:
    print("Invalid input!")

else:
    print("Result:", result)

finally:
    print("Program finished.")