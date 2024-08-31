#include <iostream>
#include <cmath>
using namespace std;

float GPA(float, float, float , float, float);//function prototype for gpa
float avgGPA(float, float, float );//function prototype for average gpa

// Calculating gpa and checking valid input will be same as the previous assignment
int main(){
     int s1,
        s2,
        s3,
        s4,
        s5;
    float fgpa,
          sgpa,
          tgpa;
    for(int student=1;student<=3;student++){
       
    do{
        cout<< "Enter grade for Student "<< student<< "( 4=A , 3=B , 2=C , 1=D , 0=F ): ";
        cin >> s1 >> s2 >> s3 >> s4 >> s5; //Request 5 input and assign to each variables
        if((s1<0||s1>4)||(s2<0||s2>4)||(s3<0||s3>4)||(s4<0||s4>4)||(s5<0||s5>4)){// Only to print that it is an invalid input
            cout<<"Invalid Input"<<endl;
        }
    }while((s1<0||s1>4)||(s2<0||s2>4)||(s3<0||s3>4)||(s4<0||s4>4)||(s5<0||s5>4));//If the input is less than 0 or greater than 4, it is invalid
    //

    //To capture the output gpa
    if(student==1){// If gpa is calculated for the first time, it will be for student 1
        fgpa=GPA(s1,s2,s3,s4,s5);
        cout<<"Student 1 GPA: "<< fgpa << endl;
    }
    else if(student==2){ //second time, student 2
        sgpa=GPA(s1,s2,s3,s4,s5);
        cout<<"Student 2 GPA: "<< sgpa << endl;
    }
    else if(student==3){// third time, student 3
        tgpa=GPA(s1,s2,s3,s4,s5);
        cout<<"Student 3 GPA: "<< tgpa << endl;
    }
    else{
        cout<< "Oops. There is some error"; // not necessary
    }
      } 
    cout<<"\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n"<<endl;// Just want to look cool
        cout<<"The average GPA of 3 students: "   << avgGPA(fgpa,sgpa,tgpa);
              
    
    return 0;
}

//Calculting the GPA based on the problem
float GPA(float a, float b, float c , float d, float e){
    float s1credit= a *2, // 2 credits for subject 1
          s2credit= b *3, // 3 credits for subject 2
          s3credit= c *3, // 3 credits for subject 3
          s4credit= d *4, // 4 credits for subject 4
          s5credit= e *4, // 4 credits for subject 5

          gpa= (s1credit+s2credit+s3credit+s4credit+s5credit)/(2+3+3+4+4);

          return gpa;}

//Calculate average GPA for 3 students
float avgGPA(float x, float y, float z){
 float avggpa=(x+y+z)/3;
 return avggpa;
}