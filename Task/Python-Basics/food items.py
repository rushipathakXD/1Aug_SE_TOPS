#food menu + bill + user choice

foodItems = {}

choice = True
while(choice == True):
    print("1. Pizza - 180 Rs\n 2. Burger - 100 Rs\n 3. Dosa - 120 Rs\n 4. Idli - 50 Rs")
    userChoice = int(input("Please enter your choice (1-4): "))

    match userChoice:

        case 1:
            foodItems["Pizza"] = 180
        case 2:
            foodItems["Burger"] = 100
        case 3:
            foodItems["Dosa"] = 120
        case 4:
            foodItems["Idli"] = 50
        case _ :
            print("Enter valid choice: ")
            continue
    
    agree = input("Do you want to order more? (Y or N): ")
    if(agree == "Y"):
        continue
    else:
        choice == False
        break

totalBill = 0

for i in foodItems:
    totalBill = totalBill + foodItems[i]

print(f"Your total bill is {totalBill} Rs. Thank You!")