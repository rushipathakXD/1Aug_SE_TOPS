# EduTrack - Attendance Management System

attendance_records = []


# -------------------------------
# Check if String is Number
# -------------------------------
def is_number(value):
    return value.isdigit()


# -------------------------------
# Validate Date (DD-MM-YYYY)
# -------------------------------
def is_valid_date(date):

    parts = date.split("-")

    if len(parts) != 3:
        return False

    day, month, year = parts

    if not (is_number(day) and is_number(month) and is_number(year)):
        return False

    day = int(day)
    month = int(month)
    year = int(year)

    if year < 2000 or year > 2100:
        return False

    if month < 1 or month > 12:
        return False

    if day < 1 or day > 31:
        return False

    return True


# -------------------------------
# Check Duplicate Record
# -------------------------------
def is_duplicate(roll, date):

    for record in attendance_records:

        if record["roll"] == roll and record["date"] == date:
            return True

    return False


# -------------------------------
# Mark Attendance
# -------------------------------
def mark_attendance():

    print("\n--- Mark Attendance ---")

    name = input("Enter Student Name: ").strip()
    roll = input("Enter Roll Number: ").strip()
    course = input("Enter Course: ").strip()

    date = input("Enter Date (DD-MM-YYYY): ").strip()

    if not is_valid_date(date):
        print(" Invalid Date Format!")
        return

    if is_duplicate(roll, date):
        print(" Attendance Already Marked!")
        return

    status = input("Present (P) / Absent (A): ").upper()

    if status != "P" and status != "A":
        print(" Invalid Status!")
        return

    record = {
        "name": name,
        "roll": roll,
        "course": course,
        "date": date,
        "status": status
    }

    attendance_records.append(record)

    print(" Attendance Recorded!")


# -------------------------------
# Student Report
# -------------------------------
def student_report():

    print("\n--- Student Report ---")

    roll = input("Enter Roll Number: ").strip()

    total = 0
    present = 0

    for record in attendance_records:

        if record["roll"] == roll:

            total += 1

            if record["status"] == "P":
                present += 1


    if total == 0:
        print(" No Records Found!")
        return


    absent = total - present
    percent = (present / total) * 100


    print("\n------ Attendance Summary ------")
    print("Total Days   :", total)
    print("Present Days :", present)
    print("Absent Days  :", absent)
    print("Percentage   :", round(percent, 2), "%")


    if percent < 75:
        print(" Defaulter")
    else:
        print(" Regular Student")


# -------------------------------
# Class Report
# -------------------------------
def class_report():

    print("\n--- Class Report ---")

    if len(attendance_records) == 0:
        print(" No Data Available!")
        return


    summary = {}


    for record in attendance_records:

        roll = record["roll"]

        if roll not in summary:

            summary[roll] = {
                "name": record["name"],
                "total": 0,
                "present": 0
            }


        summary[roll]["total"] += 1

        if record["status"] == "P":
            summary[roll]["present"] += 1


    print("\n--------------------------------------------------")
    print("Roll   Name        Total  Present   %   Status")
    print("--------------------------------------------------")


    for roll in summary:

        data = summary[roll]

        total = data["total"]
        present = data["present"]

        percent = (present / total) * 100


        if percent < 75:
            status = "Defaulter"
        else:
            status = "Regular"


        print(f"{roll:5}  {data['name']:10}  {total:5}   {present:7}  {percent:5.1f}  {status}")

    print("--------------------------------------------------")


# -------------------------------
# Main Menu
# -------------------------------
def main_menu():

    while True:

        print("\n====== EduTrack System ======")
        print("1. Mark Attendance")
        print("2. Student Report")
        print("3. Class Report")
        print("4. Exit")

        choice = input("Enter Choice: ")


        if choice == "1":
            mark_attendance()

        elif choice == "2":
            student_report()

        elif choice == "3":
            class_report()

        elif choice == "4":
            print("Thank You for Using EduTrack!")
            break

        else:
            print(" Invalid Choice!")


# -------------------------------
# Start Program
# -------------------------------
main_menu()