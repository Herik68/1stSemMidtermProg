#include <iostream>
using namespace std;
int main()
{
    int input_count = 0, input, smallest;
    while(input_count<10){
        //Request the input from user
        cout<< "Enter an integer: ";
        cin>> input;

        //Count the input and make one bigger
        input_count++;

        //If the input_count is zero, the first input will be the smallest 
        if(input_count==1){
            smallest=input;
        }

        //If the next input is smaller than the smallest , change it to be the smallest 
        else if(input<smallest){
            smallest = input;
        }
    }

    //Display Result
    cout<<"The smallest number is "<< smallest;
    return 0;
}
