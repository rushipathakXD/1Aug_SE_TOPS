# Write a Python program that uses a custom iterator to iterate over a list of integers.
def iterator(numbers):
    for n in numbers:
        yield n

nums = [1, 2, 3, 4, 5]

for value in iterator(nums):
    print(value)
