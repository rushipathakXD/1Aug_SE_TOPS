# Write a program to check all list elements are alphabetics or not.
# E.g ["ewr","wewe","123"] output False ["asd","wer","qqq","ddd"] output True

lst_words = ["ewr", "wewe", "123"]
lst_words1 = ["asd","wer", "qqq","ddd"]

count = 0
count1 = 0
for i in lst_words:
    if(i.isalpha()):
        count = count + 1

for i in lst_words1:
    if(i.isalpha()):
        count1 = count1 + 1

if(len(lst_words) == count):
    print("True")
else:
    print("False")

if(len(lst_words1) == count1):
    print("True")
else:
    print("False")