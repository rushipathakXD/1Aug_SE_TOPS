age = int(input("Enter an Age: "))
if(age>=0 and age<=2):
    print("Infant")
elif(age>=3 and age<=18):
    print("Minor")
elif(age>=19 and age<=50):
    print("Adult")
elif(age>=51 and age<=70):
    print("Senior")
elif(age>70):
    print("Super Senior")