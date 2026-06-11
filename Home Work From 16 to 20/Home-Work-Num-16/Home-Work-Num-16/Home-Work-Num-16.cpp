//Write a program to calculate rectangle Area through diagonale and side area of rectangle 
//and print it on the screen

#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(float& A, float& B)
{
    cout << "Please Enter A\n";
    cin >> A;

    cout << "Please Enter B\n";
    cin >> B;

}

float RecangleAreaBySideAndDiangonale(float A, float B)
{
    float Area = A * sqrt(pow(B, 2) - pow(A, 2));
    return Area;
}

void PrintResult(float Area)
{
    cout << "Result Area is " << Area << endl;

}


int main()
{
    float A, B;
    ReadNumber(A, B);
    PrintResult(RecangleAreaBySideAndDiangonale(A, B));
}
