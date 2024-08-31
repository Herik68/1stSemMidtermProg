#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;
//I dont even know how to calculate standard Deviation
float calmode(float , float , float , float , float , float);
float calmedian(float , float , float , float , float);
float calmean(float , float , float , float , float , float);
float calStandardDeviation(float , float , float , float , float , float);

int main(){
    int
        face,
        f1=0,
        f2=0,
        f3=0,
        f4=0,
        f5=0,
        f6=0;
        
    srand(time(0));// To make it change whenever starting the program
    for(int i=1;i<=6000;i++){//roll 6000 times
        face=rand()%6+1; // print number between 1-6
        switch (face)
        {
        case 1: // if the number is 1 , the frequency of face 1 will be added , same for the other faces
            f1++;
            break;
        
        case 2:;
            f2++;
            break;
        
        case 3:
            f3++;
            break;

        case 4:
            f4++;
            break;

        case 5:
            f5++;
            break;

        case 6:
            f6++;
            break;

        
        default:
            break;
        }
    }
    



//Printing the result of random num
    cout<<setw(4)<<"Face"<<setw(10)<<"Frequency"<< endl
        <<setw(4)<<"1"<<setw(10)<<f1<< endl
        <<setw(4)<<"2"<<setw(10)<<f2<< endl
        <<setw(4)<<"3"<<setw(10)<<f3<< endl
        <<setw(4)<<"4"<<setw(10)<<f4<< endl
        <<setw(4)<<"5"<<setw(10)<<f5<< endl
        <<setw(4)<<"6"<<setw(10)<<f6<< endl;

//Printing mode,median,mean

    cout<<setw(10)<< "Mode: "<< calmode(f1,f2,f3,f4,f5,f6)<<endl
        <<setw(10)<< "Median: "<< calmedian(f1,f2,f3,f4,f5)<<endl
        <<setw(10)<< "Mean: "<<fixed<<setprecision(2)<< calmean(f1,f2,f3,f4,f5,f6)<<endl
        <<setw(10)<< "Sdt: "<<fixed<<setprecision(2)<< calStandardDeviation(f1,f2,f3,f4,f5,f6)<<endl;
    return 0;
}


//Function for calculating mode
float calmode(float a, float b, float c, float d, float e, float f){
    float most=0,mode;
    if(a>most){
        most=a;
        mode= 1;
    }
    if(b>most){
        most=b;
        mode= 2;
    }
    if(c>most){
        most=c;
        mode= 3;
    }
    if(d>most){
        most=d;
        mode= 4;
    }
    if(e>most){
        most=e;
        mode= 5;
    }
    if(f>most){
        most=f;
        mode=6;
    }
    return mode;

}

//Function for calculating median
float calmedian(float a, float b, float c, float d, float e){//In checking these condition we will only need f1-f5, if the result is more than f1+...+f5, it will automatically f6
    int midnum=3001,median;
    if(a>midnum){
        median = 1;
    }
    else if(a+b>midnum){
        median = 2;
    }
    else if(a+b+c>midnum){
        median = 3;
    }
    else if(a+b+c+d>midnum){
        median = 4;
    }
    else if(a+b+c+d+e>midnum){
        median = 5;
    }
    else{
        median=6;
    }
    return median;
}

//Function calculating mean
float calmean(float a, float b, float c, float d, float e, float f){
    float mean= ((a*1.0)+ (b*2.0)+(c*3.0)+(d*4.0)+(e*5.0)+(f*6.0))/6000; //Someone said that it is the mean formula, I m not sure
    return mean;
}


//Function calculating standard deviation
float calStandardDeviation(float a, float b, float c, float d, float e, float f){
    float meanresult= calmean(a,b,c,d,e,f),// as we need mean result for calculating standard deviation
          sd1=pow((1.0-meanresult),2)*a,
          sd2=pow((2.0-meanresult),2)*b,
          sd3=pow((3.0-meanresult),2)*c,
          sd4=pow((4.0-meanresult),2)*d,
          sd5=pow((5.0-meanresult),2)*e,
          sd6=pow((6.0-meanresult),2)*f;
    double standardDeviation=sqrt((sd1+sd2+sd3+sd4+sd5+sd6)/5999);
                        
    return standardDeviation;
}

