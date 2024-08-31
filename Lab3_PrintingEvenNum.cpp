#include <iostream>
using namespace std;

int main(){
    int input;
    cout<< "Enter a number: ";
    cin>> input;

    //As it starts from 0, u just have to make the step go by 2, it will only show even number until we reach the input number;
    for(int i=0; i<=input;i+=2){
    cout<< i<<endl;}

    //U can also do it using nested loop, but it is a waste of time
    // for(int j=0; j<=input;j++){
    //     if(j%2==0){
    //         cout<< j<< endl;
    //     }
    // }

    return 0;

}