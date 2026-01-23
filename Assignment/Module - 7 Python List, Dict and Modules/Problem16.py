# Write a Python program to separate keys and values from a dictionary using keys() and values() methods

dict1 = {
    "A": "Apple",
    "B": "Banana",
    "C": "Cherry",
    "D": "Dosa",
    "E": "English",
    "F": "Fruit"
}

# Get keys
keys = dict1.keys()

# Get values
values = dict1.values()

print("Keys:")
for k in keys:
    print(k)

print("\nValues:")
for v in values:
    print(v)
