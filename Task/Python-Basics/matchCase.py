#Take month name as user input and display the days in the months accordingly using match case with in operator
lst_months31 = ["January", "March", "May", "July", "August", "October","December"]
lst_months30 = ["April", "June", "September","November"]

month = input("Enter Month name: ")

if(month == "February"):
    print("28 or 29 days")

match month:
    case m if m in lst_months31:
        print("31 days")
    
    case n if n in lst_months30:
        print("30 days")
    case _:
        print("Enter valid input month")