#include <iostream>
using namespace std;

int main(){
    int input,
        c1=0,
        c2=0,
        c3=0;
    do{
        cout<<"Enter 1,2 or 3 (-1 to end input): ";
        cin>>input;
        switch (input)
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case -1:// when input = -1 ; we will stop the program and show the result
            cout<<"Total 1s: "<< c1 << endl
                <<"Total 2s: "<< c2 << endl
                <<"Total 3s: "<< c3 << endl;
            break;
        default:// print unknown input for other numbers except 1,2,3
        cout<< "Unknown Input"<< endl;
        break;
        }
        
    }while(input != -1);

    return 0;
}
