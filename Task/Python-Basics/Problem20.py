#Print even numbers from give range without using % .
lowerLimit = int(input("Enter the Lower Limit of the range: "))
upperLimit = int(input("Enter the Upper Limit of the range: "))

if lowerLimit & 1:
    lowerLimit = lowerLimit+1

for i in range(lowerLimit, upperLimit+1, 2):
    print(i, end=" ")