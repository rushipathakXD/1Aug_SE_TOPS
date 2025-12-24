#Write a program to check if a given string is a valid phone number 
#(e.g., str_phone: (123) 456-7890 output True)

phone_num = input("Enter Your Phone Number: ")

if(len(phone_num) == 10):
    print("Valid Phone Number")
else:
    print("Invalid Phone Number")