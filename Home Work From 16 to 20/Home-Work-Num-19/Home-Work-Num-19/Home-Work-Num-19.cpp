//Write a program to calculate circle area , through diameter , then print it on the screen 
#include <cmath>
#include <iostream>
using namespace std;

float Readdiameter()
{
    float D;
    cout << "Please Enter circle diameter :\n";
    cin >> D;
    return D;
}
float calculatearea(float D)
{
    
    const float PI = 3.14;
    float Area = (pow(D, 2) * PI) / 4;
    return Area;
}
void PrintResult(float Area)
{
    cout << "result Area is " << Area << endl;
}

int main()
{
    PrintResult(calculatearea(Readdiameter()));
}
