#include <iostream>
using namespace std;

int main(){
    const int asize=10;
    int a[asize]={},smallest;

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
        if(j==0 || a[j]< smallest){
            smallest=a[j];
        }
    }
    cout<<"The smallest num using normal is "<< smallest << endl;
    

    //or use bubblesort
    int swap,hold;
    do{
        swap=0;
        for(int i=0;i<asize-1;i++){
            if(a[i]>a[i+1]){
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
                swap=1;
            }
        }
    }while(swap==1);
    cout<<"The smallest num using bubblesort is "<< a[0]<< endl;

    return 0;
}