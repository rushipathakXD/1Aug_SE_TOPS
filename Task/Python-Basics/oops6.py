class Person:
    def __init__(self,name,age):
        self.name = name
        self.age = age

    def display(self):
        print(self.name, self.age, end=" ")

class Employee(Person):
    def __init__(self, name, age,salary):
        super().__init__(name, age)
        self.salary = salary

    def display(self):
        super().display()
        print(self.salary)

class Manager(Employee):
    pass

class Student(Person):
    def __init__(self, name, age,marks):
        super().__init__(name, age)
        self.marks = marks

    def display(self):
        super().display()
        print(self.marks)

e1 = Manager("Rushi", 21, 23456)
e1.display()

s1 = Student("Rushi", 21, 100)
s1.display()