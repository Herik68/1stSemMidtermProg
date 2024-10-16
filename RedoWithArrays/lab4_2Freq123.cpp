#include <iostream>
using namespace std;

int main(){
    const int freqsize=4;
    int freq[freqsize]={};
    int input;
    do
    {
       cout<< "Enter 1, 2, or 3 (-1 to quit): ";
       cin>>input;
       if(input==-1){
        break;
       }
       else if(input<1 || input >3){
        cout<<"Invalid input! Try again.\n ";
       }
       else{
        freq[input]++;
       }
    } while (input!=-1);
    
    

    for(int i=1;i<freqsize;i++){
        cout<<"Total "<< i << "s: "<< freq[i]<<endl;
    }
    
    return 0;
    }