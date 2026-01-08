#    Menu driven program 
# 1. Add Data of Student 
# 2. Search Student
# 3. delete Student
# 4. View all the student
# 5. Exit 
student_data ={
    "ami@gmail.com":["Ami",20,2345678,120],
    "riya@gmail.com":["Riya",21,455756,150],
    "Manish@yahoo.com":["manish",22,454354,200],
    "amatullah@gmail.com":['Amatullah',22,345345,110]
   }
control = True
while(control == True):
    print("1. Add Student Data \n2. Search Student \n3. Delete Student \n4. View all students \n5. Exit")
    choice = int(input("Enter Your choice: (1-5): "))

    match choice:
        case 1:
            val = []
            key = input("Enter Email address: ")
            name = input("Enter your name: ")
            val.append(name)
            age = int(input("Enter your age: "))
            val.append(age)
            c_no = int(input("Enter Your Contact Number: "))
            val.append(c_no)
            marks = int(input("Enter Marks: "))
            val.append(marks)
            student_data[key] = val

            print("New Student Added Successfully!!!")
            

        case 2:
            search = input("Enter Email Address to Search: ")
            for i,j in  student_data.items():
                if search == i:
                    for i1 in j:
                        print(i1)
                    break
            else:
                print(f"{search} is not in Student Data.")
            

        case 3:
            delete_key = input("Enter the key to delete the record: ")
            deleted_value = student_data.pop(delete_key, None)
            if (deleted_value is not None):
                print(f"Successfully Deleted: {delete_key}")
                print(student_data)
            else:
                print(f"{delete_key} is not in the Student Data")
            
        case 4:
            print(student_data)

        case 5:
            print("Program Finished")
            control = False

        case _:
            print("Enter Valid Choice!!!")