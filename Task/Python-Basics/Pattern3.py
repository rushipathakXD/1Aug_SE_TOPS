# 1
# 2 2 
# 3 3 3
# 4 4 4 4

rows = 4
for i in range(rows+1):
    for j in range(i):
        print(i, end=" ")
    print()