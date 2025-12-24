# 1 
# 3 3
# 5 5 5
# 7 7 7 7
# 9 9 9 9 9

# rows = 5

# for i in range(1,rows*2,2):
#     for j in range(i):
#         print(i,end=" ")

#     print()

rows = 5
num = 1

for i in range(1, rows + 1):
    for j in range(i):
        print(num, end=" ")
    print()
    num += 2
