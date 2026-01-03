# Write a program to check if a list of strings is a valid list of email addresses. 
# eg. ['test@gmail.com','te@rere'] output invalid email list

lst = ["test@gmail.com", "te@rere"]

for i in lst:
    if ("@" not in i or "." not in i):
        print(f"Invalid Email - {i}")
    else:
        print(f"Valid Email - {i}")