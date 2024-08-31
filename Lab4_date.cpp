#include <iostream>
using namespace std;

int main(){
    int date;
    cout<< "Enter a date: ";
    cin>> date;
    
    if( date <0 || date > 31){
        cout<<"Invalid Date"<<endl;
    }
    else if(date < 11 || date > 19){
        cout<<"Date is either the start or end of the Month"<< endl;
    }
    else{
        cout<<"Date is in the Middle of the Month"<< endl;
    }
    return 0;
}
