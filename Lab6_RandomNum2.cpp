#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
//Standard Deviation formula is not sure
using namespace std;
int main(){
    double total=0,
            average,
            n1,n2,n3,n4,n5,n6,n7,n8,n9,n10
            ,standardDeviation;
    int input_count=0;
    srand(time(0));
    for (int i=1;i<=10;i++){
        double x= rand()%10000+10001;//10000 to 20000
        double y= x/10000;// we want decimal numbers
        input_count++;

        switch (input_count)//Assign value to each number
        {
        case 1:
            n1=y;
            break;
        case 2:
            n2=y;
            break;
        case 3:
            n3=y;
            break;
        case 4:
            n4=y;
            break;
        case 5:
            n5=y;
            break;
        case 6:
            n6=y;
            break;
        case 7:
            n7=y;
            break;
        case 8:
            n8=y;
            break;
        case 9:
            n9=y;
            break;
        case 10:
            n10=y;
            break;
        
        default:
            break;
        }
        std::cout<<setw(10)<<fixed<<setprecision(4)<< y;
        if(i%5==0){
            std::cout<<endl;
        }
        total+=y;
        average= total/10;

        //Standard Deviation
    double    mean =(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10,
        sd1=pow((n1-mean),2),
        sd2=pow((n2-mean),2),
        sd3=pow((n3-mean),2),
        sd4=pow((n4-mean),2),
        sd5=pow((n5-mean),2),
        sd6=pow((n6-mean),2),
        sd7=pow((n7-mean),2),
        sd8=pow((n8-mean),2),
        sd9=pow((n9-mean),2),
        sd10=pow((n10-mean),2);

    standardDeviation=sqrt((sd1+sd2+sd3+sd4+sd5+sd6+sd7+sd8+sd9+sd10)/10);
    }
    std::cout<<setw(15)<< "Sum: "<<fixed<<setprecision(4)<< total << endl
        <<setw(15)<< "Average: "<<fixed<<setprecision(4)<< average<< endl
        <<setw(15)<< "StandardDev: "<<fixed<<setprecision(4)<<standardDeviation<<endl;
    return 0;
}


