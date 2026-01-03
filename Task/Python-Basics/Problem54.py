# Write a program to find common among 2 lists. 
# eg. lst_numbers = [1,2,34,33,21] lst_numbers2=[11,2,33,45] output [2,33]

lst_numbers = [1,2,34,33,21]
lst_numbers2 = [11,2,33,45]

common = []

for i in lst_numbers:
    if i in lst_numbers2:
        common.append(i)

print(f"The common items are: {common}")