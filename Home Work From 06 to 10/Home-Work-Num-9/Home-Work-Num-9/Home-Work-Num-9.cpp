//Write a Program to ask the user to enter the Marks , if Avergate  >= 50 Print Pass otheruies Fail 

#include <iostream>
#include <string>
using namespace std;


void ReadNumber(int& Num1, int& Num2, int& Num3)
{
    cout << "Please Enter Your Number ( 1 )\n";
    cin >> Num1;

    cout << "Please Enter Your Number ( 2 )\n";
    cin >> Num2;
    
    cout << "Please Enter Your Number ( 3 )\n";
    cin >> Num3;
}

int SumOfNumber(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

void PrintResult(int Total)
{
    
    cout << "The total Sum Of Number is " << Total << endl;
}

int main()
{
    int Num1, Num2, Num3;
    ReadNumber(Num1, Num2, Num3);
    PrintResult(SumOfNumber(Num1, Num2, Num3));
}
