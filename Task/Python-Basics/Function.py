# lst1 = [1,2,3,4]

# def sq(num):
#     return num*num

# sq_ans  = []

# for i in lst1:
#     sq_ans.append(sq(i))

# print(sq_ans)

lst_names = ["Rushi", "Poonam", "Sneh", "Aayushi", "Shyam"]
names_upper = []

def upper(st):
    names_upper.append(st.upper())

for i in lst_names:
    upper(i)

print(names_upper)
