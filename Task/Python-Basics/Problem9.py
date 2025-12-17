#Print no. of days in given list of Months e.g ['April','February','May'] 
# output April - 30 Days February - 28 or 29 days,May 31 Days

month = input("Enter the name of Month: ")

if(month == "February"):
    print("February has 28 or 29 days")

if(month == "January" or month =="March" or month =="May" or month =="July" or month =="August" or month =="October" or month =="December"):
    print(f"{month} has 31 days")

if(month == "April" or month =="June" or month =="September" or month =="November"):
    print(f"{month} has 30 days")