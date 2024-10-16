#include <iostream>
using namespace std;
float average(float [],int );
int main(){
    const int size=5;
    int input,valid;
    float grade[size]={};

    do
    {   
        valid=1;
        cout<<"Enter grade (4=A, 3=B, 2=C, 1=D, 0=F): ";
        for(int i=0;i<size;i++){
        cin>>input;
        if(input<0 || input>size-1){
            cout<<"Invalid input"<< endl;
            valid=0;
            break;
            }
        else{
            grade[i]=input;
        }
        }
    } while (valid==0);
    cout<<"GPA: "<< average(grade,size);
   
    
         return 0;
 }
    
   


float average(float g[],int size){
    float total=0,creditTotal=0;
    int credit[size]={2,3,3,4,4};
    for(int i=0;i<size;i++){
        creditTotal+=credit[i];
    }

    for(int i=0;i<size;i++){
        total+=g[i]*credit[i];
    }
    return total/creditTotal;
}
