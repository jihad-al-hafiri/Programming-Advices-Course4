//Wite a prgran to calculate rectangle area then print it on the screen 

#include <iostream>
#include <cmath>
using namespace std;

void Read_A_And_H(float& A, float& H)
{
    cout << "Please Enter A\n";
    cin >> A;

    cout << "Please Enter H \n";
    cin >> H;
}
float TringleArea(float A, float H)
{
    float Area = (A / 2) * H;
    return Area;
}

void PrintResult(float Area)
{
    cout << "Result Area is " << Area << endl;
}

int main()
{
    float A, H;
    Read_A_And_H(A, H);
    PrintResult(TringleArea(A, H));
}
