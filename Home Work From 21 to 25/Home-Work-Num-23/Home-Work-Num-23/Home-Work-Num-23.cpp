//Write a program to calculate circle area described around arbitrary tringle 
//then print it on the screen


#include <iostream>
#include <cmath>
using namespace std;

void ReadCircleArea(float& A, float& B, float& C)
{
    cout << "Please Enter A\n";
    cin >> A;

    cout << "Please Enter B\n";
    cin >> B;

    cout << "Please Enter C\n";
    cin >> C;
}

float CalculateCircleAreaDescribedAroundArbitraryTringle(float A, float B, float C)
{
    const float PI = 3.14;
    float P = (A + B + C) / 2;
    float Area = PI * pow(((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))), 2);
    return Area;
}
void PrintResult(float Area)
{
    cout << "\nResult Area is " << Area << endl;
}

int main()
{
    float A, B, C;
    ReadCircleArea(A, B, C);
    PrintResult(CalculateCircleAreaDescribedAroundArbitraryTringle(A, B, C));
}
