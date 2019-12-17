
class Kid:

    family = 'Whit'

    def _init_(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c

    def avg(self):
        return (self.a + self.b + self.c)/3

    @classmethod
    def info(cls):
        return cls.family

print(Kid.info())


