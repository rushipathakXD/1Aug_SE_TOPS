#Print even numbers fall between 2 given numbers E.g user enter 10 20  output 12,14,16,18
lowerLimit = int(input("Enter the Lower Limit: "))
upperLimit = int(input("Enter the Upper Limit: "))

for i in range(lowerLimit, upperLimit):
    if(i%2==0):
        print(i, end=" ")