dict1 = {
    "India" : "New Delhi",
    "Srilanka" : "Colombo",
    "Spain": "Madrid",
    "Germany" : "Munich",
    "Portugal" : "Lisbon",
    "Argentina" : "Buienos - Aires"
}
# print(dict1)
# print(dict1["Portugal"])

print("Iterating Keys: ")
for i in dict1.keys():
    print(i)

print()

print("Iterating Values: ")
for i in dict1.values():
    print(i)

print()

print("Iterating Key - Values: ")
for i,j in dict1.items():
    print(i,j)