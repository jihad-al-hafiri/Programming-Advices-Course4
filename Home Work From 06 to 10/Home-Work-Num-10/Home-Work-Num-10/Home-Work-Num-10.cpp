//Write a program to ask the user to 3 Mark and calculate Average to 3 Marks and print Average in the screen :


#include <iostream>
#include <string>
using namespace std;



void Read3Marks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Plesae Enter Mark ( 1 ) \n";
    cin >> Mark1;

    cout << "Plesae Enter Mark ( 2 ) \n";
    cin >> Mark2;

    cout << "Plesae Enter Mark ( 3 ) \n";
    cin >> Mark3;

}
int SumMarks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1 ,int Mark2 ,int Mark3)
{
    return (float)SumMarks(Mark1,Mark2,Mark3) / 3;
}


void PrintAverage(float Average )

{
  
    cout << "Calculate Average is " << Average << endl;
}

int main()
{
    int Mark1, Mark2, Maek3;
    Read3Marks(Mark1, Mark2, Maek3);
    PrintAverage(CalculateAverage(Mark1, Mark2, Maek3));
}
