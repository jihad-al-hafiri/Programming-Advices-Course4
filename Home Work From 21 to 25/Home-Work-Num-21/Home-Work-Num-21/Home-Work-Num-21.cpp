//Write a program to calculate circle area along the circumference , then print it on the screen 

#include <iostream>
#include <cmath>
using namespace std;

float ReadCircumference()
{
    float L;
    cout << "Please Enter Circumference \n";
    cin >> L;
    return L;
}

float CircleAreaByCircumference(float L)
{
    const float PI = 3.14;
    float Area = (pow(L, 2) / (4 * PI));
    return Area;
}

void PrintResult(float Area)
{
    cout << "\nResult Area is " << Area << endl;
}

int main()
{
    PrintResult(CircleAreaByCircumference(ReadCircumference()));

}
