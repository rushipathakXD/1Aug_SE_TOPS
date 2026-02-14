class Bank:
    def __init__(self,balance):
        self.__balance = balance

    def deposit(self,amount):
        self.__balance += amount
        print("Deposit Successful")

    def get_balance(self):
        return self.__balance
    
    def withdraw(self,amount):
        if(amount<self.__balance):
            self.__balance -= amount
            print("Withdraw Successfull")
        else:
            print("Not Enough Money!")
            
b1 = Bank(1000)
print(b1.get_balance())

b1.deposit(500)
print(b1.get_balance())

b1.withdraw(1000)
print(b1.get_balance())

b1.withdraw(1000)