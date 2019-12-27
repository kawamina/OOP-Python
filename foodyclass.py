class Food:
    def __init__(self, name, weight, date):
        self.name = name
        self.weight = weight
        self.date = date

    def getInfo(self):
        print("Food weight is " + self.weight)
        print("U should eat it until " + self.date)


f1 = Food('Curry rice', '350g', '30.01')
f2 = Food('Pizza Margharita', '0.5kg', '16.08')

#print(f2.getInfo())
print("Which option would you like to order?: ")
print("A: Curry rice")
print("B: Pizza Margharita")
option = input("Type a letter: ")
if option == "A" or option == "a":
    print("You chose a Curry Rice")
    print(f1.getInfo())
if option == "B" or option == "b":
    print("You chose a Pizza Margharita")
    print(f2.getInfo())