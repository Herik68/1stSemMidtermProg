#include <iostream>
using namespace std;

const int scoreSize = 5, students = 3;

float average(float[], int);

int main()
{

    int input, valid;
    float grade[students][scoreSize] = {};

    for (int i = 0; i < students; i++)
    {
        valid = 1;
        cout << "Enter grade (4=A, 3=B, 2=C, 1=D, 0=F) for student " << i + 1 << " : ";
        for (int j = 0; j < scoreSize; j++)
        {
            cin >> input;
            if (input < 0 || input > scoreSize - 1)
            {
                cout << "Invalid input" << endl;
                valid = 0;
                break;
            }
            else
            {
                grade[i][j] = input;
            }
        }
        if (valid != 1)
        {
            cout << "GPA of Student " << i + 1 << " can't be calculated beacuse of invalid input" << endl;
            continue;
        }
        else
        {
            cout << "GPA of Student " << i + 1 << " : " << average(grade[i], scoreSize) << endl;
        }
    }

    return 0;
}

float average(float g[], int scoreSize)
{
    float total = 0, creditTotal = 0;
    int credit[scoreSize] = {2, 3, 3, 4, 4};
    for (int i = 0; i < scoreSize; i++)
    {
        creditTotal += credit[i];
    }
    for (int i = 0; i < scoreSize; i++)
    {
        total += g[i] * credit[i];
    }
    return total / creditTotal;
}
