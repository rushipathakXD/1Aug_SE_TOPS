#Write a program that create dictionary where keys are 1 to n and there values are squares
#e.g {1:1 , 2:4 ,3:9 , 4:16 , 5:25 , 6:36...n,n*n}

sq_dict = {}
start = int(input("Enter the starting value: "))
end = int(input("Enter the ending value: "))

for i in range(start, end+1):
    sq_dict[i] = i*i

print(sq_dict)