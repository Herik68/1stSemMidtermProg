#include <iostream>
using namespace std;

int main(){
    double total=0,gradecount=0,grade,average;

    do{
        cout<<"Enter grade, -1 to end: ";
        cin>>grade;

        //Not to add -1 to total and don't gradecount if we type -1
        if(grade!=-1){
            total+=grade;
            gradecount++;} 
        
    }while(grade!= -1);
    

    if(grade== -1){
        //For the condition that we didn t write anything and just pressed -1
        if (gradecount==0)
    {
        cout<<"No grades have entered";
    }
        //If there is an input, it will start working
    else{
        average=total/(gradecount);
        cout<< "Class average is "<< average << endl;}
    }
    
    return 0;
}