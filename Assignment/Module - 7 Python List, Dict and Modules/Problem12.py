# Write a Python program to access the value from the last index in a tuple
tup1 = (7, 'Rushi', 'Poonam', 10.5, 'Rushi')
for i in range(len(tup1)-1,-1,-1):
    print(tup1[i])