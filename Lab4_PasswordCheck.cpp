#include <iostream>
using namespace std;

int main(){
    int password;
    do{
        cout<<"Enter password: ";
        cin>> password;
        switch (password)
        {
        case 1234://When the password is correct
        cout<<"Password is Correct";
        break;
        default://for incorrect password that is not 1234
        cout<<"Incorrect Password\nTry again\n";
        break;
        }
    }while (password!=1234);//The program will only work when password is not equal to 1234 

    
    return 0;
}