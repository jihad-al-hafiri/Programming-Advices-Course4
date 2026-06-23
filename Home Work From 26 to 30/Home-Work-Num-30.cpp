#include<iostream>
using namespace std;

float ReadPositiveNumber(string Massge)
{
    int Number;
    do
    {
    cout << Massge << endl;
    cin >> Number;
    
    }while(Number <= 0);
    return Number;
}


int Factorial(int Number)
{
    int Factorial = 1;
    for(int Counter = Number ; Counter >= 1; Counter--)
    {
        Factorial *= Counter;
    }
    return Factorial;
}



int main()
{
    cout << Factorial(ReadPositiveNumber("Please Enter a Positive Number")) << endl;
    return 0;
}
