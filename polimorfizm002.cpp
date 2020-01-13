#include <iostream>

using namespace std;

class Pies
{
public:
    virtual void jaki_pies()=0;
};

class Azor :public Pies
{
    string rasa;
    string kolor;
    int waga;
public:
    Azor(string x, string y, int z)
    {
        rasa=x;
        kolor = y;
        waga = z;
    }
    virtual void jaki_pies()
    {
        cout<<"Azor: "<<rasa<<", "<<kolor<<", "<<waga<<"kg"<<endl;
    }
};
class Puszek :public Pies
{
    string rasa;
    string kolor;
    int waga;
public:
    Puszek(string x, string y, int z)
    {
        rasa=x;
        kolor = y;
        waga = z;
    }
    virtual void jaki_pies()
    {
        cout<<"Puszek: "<<rasa<<", "<<kolor<<", "<<waga<<"kg"<<endl;
    }

};
int main()
{
    Azor a("owczarek niemiecki","czarno-bezowy",40);
    Puszek p("owczarek szetlandzki","bialo-bezwy",25);

    Pies *wsk;

    wsk =&a;
    wsk -> jaki_pies();

    wsk =&p;
    wsk -> jaki_pies();

    return 0;
}
