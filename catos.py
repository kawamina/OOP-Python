class Cat:
    def __init__(self, colour, age, size):
        self.colour = colour
        self.age = age
        self.size = size


c1 = Cat('black', 3, '2B')
c2 = Cat('white', 7, '3C')

print('Data of cat no 1:')
print(c1.colour)
print('{} years old'.format(c1.age))
print('Size {}'.format(c1.size))