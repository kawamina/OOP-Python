#include <iostream>
#include <string>

using namespace std;

class Verify{
public:
    void verifyUser(){
            string login = "";
            string password = "";
            bool loginSuccess = false;

            cout<<"\t Welcome! Please login below.\n\n";

            do{
                cout<<"Login: ";
                cin>>login;
                cout<<"Password: ";
                cin>>password;

                if(login=="kawa"&&password=="xyz")
                    {
                        cout<<"\nSuccessful Login";
                        loginSuccess = true;
                    }
                else{
                        cout<<"Incorrect login or/and password\n";
                        cout<<"Please try again.\n\n";
                    }
            }while(!loginSuccess);


    }//finito of verifyUser
};
