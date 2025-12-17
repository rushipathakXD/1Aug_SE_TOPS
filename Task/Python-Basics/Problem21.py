#Print Pattern 
#1     
#1    0
#1    0    1
#1    0    1    0

row = int(input("Enter Number of Rows: "))

for i in range(1, row + 1):
    val = 1
    for j in range(i):
        print(val, end=" ")
        val = 1 - val   
    print()
