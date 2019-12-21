
class Person:
    def __init__(self, name, nationality, age):
        self.name = name
        self.nationality = nationality
        self.age = age

    def introduce_self(self):
        print("My name is "+self.name)


r1 = Person('Tom', 'French', 30)
r2 = Person('Emma', 'Russian', 56)

print(r2.introduce_self())