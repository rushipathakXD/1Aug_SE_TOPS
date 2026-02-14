class Person:

    def __init__(self,name,age,c_no):
        self.name=name
        self.age=age
        self.c_no=c_no
    def greet(self):
        print("Good Morning!!!!",self.name)

obj1 = Person("dharmishtha",30,23456)
obj2 = Person("ami",20,56555)
obj3=Person("priyanshu",22,23232)
obj4=Person("Jay",22,23232)
lst_person=[obj1,obj2,obj3,obj4]

# for i in lst_person:
#     i.greet()

#display only those details whose name is more then 5 letters 
for i in lst_person:
    if len(i.name)>5:
        i.greet()