#Print fibonacci series (Accept n from user)
n = int(input("Enter the n for fibonacci series: "))

prev = 0
curr = 1

for i in range(n):
    print(prev, end=" ")
    prev, curr = curr, prev + curr