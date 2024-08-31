#include <iostream>
using namespace std;
int main()
{   
    float grade,average,total=0;
    for(int gradecount=0;gradecount<10;gradecount++){
        cout<<"Enter grade: ";
        cin>>grade;
        total = total+grade;
    }
    average=total/10;
    cout<<"Class average is "<< average << endl;
    return 0;
}