
class Person:
    def introduce_self(self):
        print("My name is "+self.name)

r1 = Person()
r1.name = 'Tom'
r1.nationality = 'French'
r1.age = 30

r1.introduce_self()

r2 = Person()
r2.name = 'Emma'
r2.nationality = 'Russian'
r2.age = 42

r2.introduce_self()

