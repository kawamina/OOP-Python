#include <iostream>
#include <string>

using namespace std;

class Salad
{
private:
    int number_tomato;
public:
    friend void input_tomato(Salad *portion);
    void print();
};
void Salad::print()
{
    cout<<"Number of tomatoes: "<<number_tomato<<endl;
}
void input_tomato(Salad *portion)
{
    cout<<"Please input number of tomatoes: ";
    cin>>portion->number_tomato;
}

int main(int argc, char*argv[])
{
    Salad babcina;
    input_tomato(&babcina);

    babcina.print();

    cin.sync();
    cin.get();
    return 0;
}
