//Write a program to calculate circle Area then print it on the screen 

#include <iostream>
#include <cmath>
using namespace std;


float ReadNum()
{
    float R;
    cout << "Please Enter to R\n";
    cin >> R;
    return R;
}

float CalvculateCircle(float R)
{
    const float PI = 3.14;
    float Area = pow(R, 2) * PI;
    return Area;
}

void PrintResult(float Area)
{
    cout << "result Area is " << Area << endl;
}

int main()
{
    PrintResult(CalvculateCircle(ReadNum()));
}
