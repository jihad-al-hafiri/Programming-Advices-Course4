//Write a progran to calculate circle area inscribed in an isosceles tringle 
//then print it on the screen .

#include <iostream>
#include <cmath>
using namespace std;

void ReadIsosceles(float &a , float &b )
{
    cout << "Please Enter Circle Area ( a )\n";
    cin >> a;

    cout << "Please Enter Circle Area ( a )\n";
    cin >> b;
}

float  CalculateCircleAreaInscribedInAnIsoscelesTringle(float a , float b)
{
    const float PI = 3.14;
    float Area = PI * (pow(b, 2) / 4) * ((2*a - b) / (2*a +b));
    return Area;
}
void PrintResult(float Area)
{
    cout << "Result Area is " << Area << endl;
}



int main()
{
    float a, b;
    ReadIsosceles(a, b);
    PrintResult(CalculateCircleAreaInscribedInAnIsoscelesTringle(a, b));

}
