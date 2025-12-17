# creating a to-do list
lst_task = ["Eating", "Sleeping", "Playing", "Studying", "Reading", "Shopping"]

userInput = input("Enter a task to compare: ")

check = f"{userInput}" in lst_task

if(check == True):

    print(f"Your task of {userInput} is there in the to-do list")

else:
    print(f"Your task of {userInput} is not there in the to-do list")