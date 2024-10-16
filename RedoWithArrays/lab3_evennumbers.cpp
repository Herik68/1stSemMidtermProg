#include <iostream>
using namespace std;

int main(){
    int resultsize;
    cout<<"Enter a number :";
    cin>> resultsize;
    int result[resultsize]={};
    cout<<"Even number from 0 to "<< resultsize<<" : "<< endl;
    for(int i=0;i<=resultsize;i++){
        result[i]=i;
        
        if(result[i]%2==0){
            cout<< result[i]<<endl;
        }
    }
    return 0;
}