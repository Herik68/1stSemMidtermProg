#include <iostream>
using namespace std;
int main()
{
    int input_count = 0, input, biggest , obgt; //As we make out biggest number to be zero, it will always lesser than our first input
    //                                              that make our first input to be counted as the biggest

    //Do it 10 times
    while(input_count<10){
        //Request input
        cout<<"Enter an integer: ";
        cin>> input;
        input_count++;

        if(input_count==1){
            biggest=input;
            obgt=1;
        }

        //If the input is greater than biggest number, the input will be the biggest and the occurence will be reset 
        if(input>biggest){
            biggest = input;
            obgt=1;
        }

        //If the input is still the same as the biggest, it will stay biggest and the occurence will be added
        else if (input==biggest){
            obgt=obgt+1;
        }

    }
    //Display Result
    cout<<"The occurence of biggest number is "<< obgt <<endl;
    return 0;
}
