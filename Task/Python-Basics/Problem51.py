#Write a program to count the number of words that start with a vowel in a given sentence 
# E.g Input: `'An apple a day keeps the doctor away'`
#    - Output: `4` (words: 'An', 'apple', 'a', 'away')

str1 = input("Enter a String: ").lower()
words = str1.split()
count = 0

for i in range(0,len(words)):
    # for j in range(0,1):
    if(words[i][0] == 'a' or words[i][0] == 'e' or words[i][0] == 'i' or words[i][0] == 'o' or words[i][0] == 'u'):
        count = count + 1

print(f"The total words that start from vowels are: {count}")