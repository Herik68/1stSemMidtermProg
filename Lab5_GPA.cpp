#include <iostream>
#include <cmath>
using namespace std;

float GPA(float, float, float , float, float);//function prototype

int main(){
    int s1,
        s2,
        s3,
        s4,
        s5;
    do{
        cout<< "Enter grade ( 4=A , 3=B , 2=C , 1=D , 0=F ): ";
        cin >> s1 >> s2 >> s3 >> s4 >> s5; //Request 5 input and assign to each variables
        if((s1<0||s1>4)||(s2<0||s2>4)||(s3<0||s3>4)||(s4<0||s4>4)||(s5<0||s5>4)){// Only to print that it is an invalid input
            cout<<"Invalid Input"<<endl;
        }
    }while((s1<0||s1>4)||(s2<0||s2>4)||(s3<0||s3>4)||(s4<0||s4>4)||(s5<0||s5>4));//If the input is less than 0 or greater than 4, it is invalid and 
    //                                                                             the program will run again
    

    cout<<"GPA: "<< GPA(s1,s2,s3,s4,s5)<< endl;// Calculate GPA when all inputs are valid
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
    return gpa;
}
