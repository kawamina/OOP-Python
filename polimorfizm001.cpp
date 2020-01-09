#include <iostream>

using namespace std;

class Osoba
{
public:
    virtual void pokaz_dane()=0;
};

class Emma :public Osoba
{
    string name;
    string sex;
    int age;
public:
    Emma(string n, string s, int a)
    {
        name = n;
        sex = s;
        age =a;
    }
    virtual void pokaz_dane()
    {
        cout<<"Dane Emmy: "<<name<<", "<<sex<<", "<<age<<endl;
    }

};
class Pablo :public Osoba
{
    string name;
    string sex;
    int age;
public:
    Pablo(string n, string s, int a)
    {
        name = n;
        sex = s;
        age =a;
    }
    virtual void pokaz_dane()
    {
        cout<<"Dane Pablo: "<<name<<", "<<sex<<", "<<age<<endl;
    }
};
int main()
{
    Emma e("Emma","kobieta",30);
    Pablo p("Pablo","mezczyzna",40);

    Osoba *wsk;

    wsk = &e;
    wsk -> pokaz_dane();

    wsk = &p;
    wsk -> pokaz_dane();

    return 0;
}
