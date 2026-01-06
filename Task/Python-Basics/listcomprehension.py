# WAP to find square of a number and store it in another list

lst2 = [1,22,6]
ans = []
# for i in lst2:
#     ans.append(i*i)

# print(ans)

ans1 = [i*i for i in lst2 if i % 2 == 0]
print(ans1)