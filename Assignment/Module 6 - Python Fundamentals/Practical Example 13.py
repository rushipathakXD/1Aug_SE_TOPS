#Write a generator function that generates the first 10 even numbers.
def even_numbers():
    for i in range(2, 21, 2):
        yield i

for num in even_numbers():
    print(num)