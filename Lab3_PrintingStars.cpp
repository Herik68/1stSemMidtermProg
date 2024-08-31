#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    
    for (int i=0;i<=x;i++){// first for loop is for row
        for(int j=0;j<=x;j++){// second for loop is for column
            if(i<j){
                cout<<"*";
            }
            else{// leave space for places that row number is less than column number
                cout<< " ";
            }
        }
        cout<< endl;
    }
    return 0;
}