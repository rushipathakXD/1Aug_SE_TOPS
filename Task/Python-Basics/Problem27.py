#Print Arithmatic Progesstion Series 
# formula = S = n/2 * [2*a + (n-1) * d]

n = int(input("Enter the number of terms: "))
a = int(input("Enter the starting term: "))
d = int(input("Enter the constant difference between two numbers: "))

for i in range(n+1):
    print(a + i * d, end=" ")