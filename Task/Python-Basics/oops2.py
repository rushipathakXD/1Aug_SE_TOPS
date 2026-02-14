class A:
    def __init__(self,c_no,name):
        self.__c_no = c_no
        self.name = name

    def display(self):
        print(self.__c_no)
        print(self.name)

a = A(123456, "Rushi")
a.display()