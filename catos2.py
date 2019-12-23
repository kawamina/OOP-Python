class Cat:
    def __init__(self, colour, age, size):
        self.colour = colour
        self.age = age
        self.size = size

    def definit(self):
        return 'Cat nr 1 is {}, is {} years old and its size is {}'.format(self.colour,self.age,self.size)


c1 = Cat('black', 3, '2B')
c2 = Cat('white', 7, '3C')

print(c1.definit())