class User:
    def __init__(self, sex, profession, age):
        self.sex = sex
        self.profession = profession
        self.age = age

    def getKnow(self):
        print("Person is " + self.sex + ', ' + self.profession + ' and ' + self.age + ' years old.')


#Powitanie
u1 = User('female', 'teacher', '36')
u2 = User('male', 'reporter', '50')

#print(User.getKnow(u1))
question=int(input('Please choose which one to check: Anna(write 1) or Piotr (write 2): '))
if question == 1:
    print(User.getKnow(u1))
if question == 2:
    print(User.getKnow(u2))
u3 =input('Please input info about Ewelina: ')
sex3 = input('Male or female?')
profession3 = input('Profession')
age3 = input('Age?')
u3 = User(sex3, profession3, age3)
print('Is that correct?: ')
print(User.getKnow(u3))


