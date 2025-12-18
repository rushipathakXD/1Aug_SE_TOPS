# for lab taks : Ask user about the start ,end and increment value and print accourdingly

start = int(input("Enter the starting value: "))
end = int(input("Enter the ending value: "))
step = int(input("Enter the step value(The constant gap between numbers: )"))

for i in range(start,end+1,step):
    print(i)