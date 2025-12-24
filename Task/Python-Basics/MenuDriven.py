while True:
        
    print("\n\n\n1. Addition", "2. Subtraction", "3.Multiplication", "4. Division", "5. Exit", sep="\n")

    choice = int(input("Enter your choice(1-5): "))

    match choice:
        case 1:
            num1 = int(input("Enter number 1: "))
            num2 = int(input("Enter number 2: "))
            print(f"Addition of {num1} and {num2} is {num1+num2}")
        case 2:
            num1 = int(input("Enter number 1: "))
            num2 = int(input("Enter number 2: "))
            print(f"Subtraction of {num1} and {num2} is {num1-num2}")
        case 3:
            num1 = int(input("Enter number 1: "))
            num2 = int(input("Enter number 2: "))
            print(f"Multiplication of {num1} and {num2} is {num1*num2}")
        case 4:
            num1 = int(input("Enter number 1: "))
            num2 = int(input("Enter number 2: "))
            print(f"Division of {num1} and {num2} is {num1/num2}")
        case 5: 
            print("Loop Exit")
            break
        case _: print("Enter a valid choice!!")