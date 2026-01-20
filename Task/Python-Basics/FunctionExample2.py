def isEven(num):
    if(num % 2 == 0):
        return True
    else:
        return False
    
number = int(input("Enter a Number: "))

ans = isEven(number)
print(ans)