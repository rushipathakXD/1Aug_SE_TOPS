#Practical Example 7: Write a Python program to calculate grades based on percentage using if-else ladder
percentage = float(input("Enter Percentage: "))

if(percentage>=90):
    print("A grade")

elif(percentage>=80 and percentage<90):
    print("B grade")

elif(percentage>=70 and percentage<80):
    print("C grade")

elif(percentage>=60 and percentage<70):
    print("D grade")

elif(percentage>=50 and percentage<60):
    print("E grade")

elif(percentage>=40 and percentage<50):
    print("F grade")

else:
    print("Fail")