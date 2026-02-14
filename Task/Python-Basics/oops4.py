class Person:
    def __init__(self,name,age):
        self.name = name
        self.age = age

    def display(self):
        print(self.name, self.age)

class Employee(Person):
    pass

class Manager(Employee):
    pass

e1 = Manager("Rushi", 21)
e1.display()