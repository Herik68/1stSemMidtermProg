#include <iostream>
using namespace std;

int main(){
    const int asize=10;
    int a[asize]={},biggest,bigocc;

    cout<<"Enter 10 integers: ";
    for(int i=0;i<asize;i++){
        cin>>a[i];
    }
    
    cout<<"The inputs are : ";
    for(int i=0;i<asize;i++){
        cout<<a[i]<< " ";
    }cout<<endl;


    //normal
    for(int j=0;j<asize;j++){
        if(j==0 || a[j]>biggest){
            biggest=a[j];
            bigocc=1;
        }
        else if(a[j]==biggest){
            bigocc++;
        }
    }
    cout<<"The biggest num using normal is "<< biggest <<" and its occurence is "<< bigocc<< endl;
    

    //or use bubblesort
    //we should not use bubblesort while finding bigocc because if biggest is 12352352, we will have to make a very large freq array from 0 -this number
    int swap,hold;
    do{
        swap=0;
        for(int i=0;i<asize-1;i++){
            if(a[i]<a[i+1]){
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
                swap=1;
            }
        }
    }while(swap==1);
    cout<<"The biggest num using bubblesort is "<< a[0]<< endl;

    return 0;
}