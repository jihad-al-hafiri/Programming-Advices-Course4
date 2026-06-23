//Write a program calculate rectangle area and print it to the screen 
#include <iostream>
using namespace std;

void Read2Number(float& A, float& B)
{
    cout << "Please Entre To Number ( 1 ) \n";
    cin >> A;

    cout << "Please Entre To Number ( 2 ) \n";
    cin >> B;

}

int CalculateArea(float A, float B)
{
    return A * B;
}
void PrintArea(float Area)
{
    cout << "Result Area is " << Area << endl;
}

int main()
{
    float A, B;
    Read2Number(A, B);
    PrintArea(CalculateArea(A, B));
}
