#include <iostream>

using namespace std;

class Ksiazka
{
    public:

    string gatunek;
    string tytul;
    int rok_wydania;

    void dodaj_ksiazke()
    {
        cout<<"DODAWANIE NOWEGO ZWIERZÊCIA DO BAZY: "<<endl;
        cout<<"Podaj gatunek: ";
        cin>>gatunek;
        cout<<"Podaj tytul: ";
        cin>>tytul;
        cout<<"Podaj rok wydania: ";
        cin>>rok_wydania;

    }

    void rozpoznaj()
    {
        if(gatunek=="romans") cout<<tytul<<" wydana w "<<rok_wydania<<" jest uwielbiana przez tysiace kobiet!";
        else if(gatunek=="kryminal") cout<<tytul<<" wydana w "<<rok_wydania<<" trzyma w napieciu wielu czytelnikow!";
        else if(gatunek=="sensja") cout<<tytul<<" wydana w "<<rok_wydania<<" czyta sie z wypiekami na twarzy!";
    }
};

int main(){

    Ksiazka k1;
    k1.dodaj_ksiazke();
    k1.rozpoznaj();


    return 0;

}
