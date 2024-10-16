#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

float mean(int[], int);
int median(int[], int);
void sort(int[], int);
int mode(int [], int);
float stddev(int [], int );

    int main()
{
    const int frequencysize = 7;
    int responsesize;
    cout << "How many times do u want to roll: "; // Let the player decide how many time do they want to roll
    cin >> responsesize;
    int response[responsesize] = {},//for how many time each number get
        frequency[frequencysize] = {};// face

    srand(time(0));//Create random num

    for (int i = 0; i < responsesize; i++)//add frequency to each number
    {
        response[i] = rand() % 6+1;
        frequency[response[i]]++;
    }


    //Print Results
    cout << setw(23) << "face" << setw(13) << "frequency" << endl;
    for (int i = 1; i < frequencysize; i++)
    {
        cout << setw(23) << i << setw(13) << frequency[i] << endl;
    }
    cout << setw(23) << "Mean:" << setw(13) <<fixed<<setprecision(3)<<mean(response, responsesize) << endl
        <<setw(23) << "Median:" << setw(13) << median(response, responsesize) << endl
        <<setw(23) << "Mode:" << setw(13) << mode(response, responsesize) << endl
        <<setw(23) << "Standard Deviation:" << setw(13) <<fixed<<setprecision(3)<< stddev(response, responsesize) << endl;
        
    return 0;

}


// Bubblesort
void sort(int a[], int asize)
{
    int swap, hold;
    do
    {   
        swap=0;
        for (int i = 0; i < asize-1; i++)
        {
            if (a[i] > a[i+1])
            {
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
                swap=1;
            }
        }
    }while(swap==1);
}



// Calculate Mean
float mean(int a[], int asize)
{
    float sum = 0;

    for (int i = 0; i < asize; i++)
    {
        sum += a[i];
    }
    return sum / asize;
}



// Calculate Median
int median(int a[], int asize)
{
    sort(a, asize);
    if (asize % 2 == 0)
    {
        return (a[asize / 2 - 1] + a[asize / 2]) / 2;
    }
    else
    {
        return a[asize / 2];
    }
}


//Calculate Mode
int mode(int a[], int asize)
{
    int smallestNum = a[0], biggestNum = a[asize - 1];
    int occurence[biggestNum + 1] = {};

    for (int i = 0; i < asize; i++)
    {
        occurence[a[i]]++;
    }

    int maxoccur = 0, Mode = 0;
    for (int i = smallestNum; i <= biggestNum; i++)
    {
        if (occurence[i] > maxoccur)
        {   
            maxoccur = occurence[i];
            Mode = i;
        }
    }
    return Mode;
}


// Calculate Standard Deviation
float stddev(int a[], int asize){
    float avg = mean(a, asize);
    float sum = 0;
    for (int i = 0; i < asize; i++)
    {
        sum += (a[i] - avg) * (a[i] - avg);
    }
    return sqrt(sum / asize);
}