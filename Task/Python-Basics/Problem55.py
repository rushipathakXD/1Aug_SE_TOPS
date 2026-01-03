# Write a program to sort a list of strings by their length e.g ['apple', 'banana', 'kiwi', 'orange']
# output : ['kiwi', 'apple', 'orange', 'banana']

lst = ["apple", "banana", "kiwi", "orange"]

sorted_lst = sorted(lst, key=len)
print(sorted_lst)