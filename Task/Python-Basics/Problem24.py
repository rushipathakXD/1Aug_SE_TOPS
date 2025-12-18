#Print Pattern 
#1
#1 2
#2  3  4
#4  5  6 7
#7  8  9 10

start = 1

for i in range(1, 6):
    num = start
    for j in range(i):
        print(num, end=" ")
        num += 1
    print()
    start = num - 1
