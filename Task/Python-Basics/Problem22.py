#Print Pattern 
#A     
#A    B
#A    B    C
#A    B    C    D

row = 4
for i in range(1, row + 1):
    for j in range(i+1):
        if j == 1:
            print("A", end=" ")
        if j == 2:
            print("B", end=" ")
        if j == 3:
            print("C", end=" ")   
        if j == 4:
            print("D", end=" ")
    print()