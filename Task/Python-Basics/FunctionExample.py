#create a function which return the square of a number

def square(num):
    return num * num

number = int(input("Enter Number: "))

ans = square(number)
print(f"The square of {number} is {ans}")