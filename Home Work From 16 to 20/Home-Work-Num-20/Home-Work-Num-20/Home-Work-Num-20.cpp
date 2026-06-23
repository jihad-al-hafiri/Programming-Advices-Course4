//Write a program to calculate circle area , inscribed in a square ,then print it on the screen 

#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide()
{
    float A;
    cout << "Please Enter Circle square  \n";
    cin >> A;
    return A;
}

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.14;
    float Area = (pow(A, 2) * PI) / 4;
    return Area;
}
void PrintResult(float Area)
{
    cout << "Result cicle Area is " << Area << endl;

}


int main()
{
    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
}
