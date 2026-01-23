# Write a Python program to convert two lists into one dictionary using a for loop
keys = ["A", "B", "C", "D", "E"]
values = ["Apple", "Banana", "Cherry", "Dosa", "English"]

my_dict = {}

for i in range(len(keys)):
    my_dict[keys[i]] = values[i]

print("Dictionary:", my_dict)
