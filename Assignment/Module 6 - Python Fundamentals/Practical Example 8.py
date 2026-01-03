name = input("Enter your name: ")
WBC = float(input(f"Enter the WBC count of {name}: "))
RBC = float(input(f"Enter the RBC count of {name}: "))
Hemoglobin = float(input(f"Enter the percentage of Haemoglobin of {name}: "))
weight = float(input("Enter your weight: "))

if RBC > 500:
    if WBC > 825:
        if Hemoglobin > 8:
            if weight > 50:
                print(f"{name} is eligible for donating blood")
            else:
                print("Sorry, you are not eligible for donating blood")
        else:
            print("Sorry, you are not eligible for donating blood")
    else:
        print("Sorry, you are not eligible for donating blood")
else:
    print("Sorry, you are not eligible for donating blood")
