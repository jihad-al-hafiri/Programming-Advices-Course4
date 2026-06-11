//Write a program to ask the user to enter number1 and number2 , Then print the max mnumber
#include <iostream>
using namespace std;

void ReadNumber(int& Num1, int& Num2)
{
    cout << "Please Enter Number ( 1 )\n";
    cin >> Num1;

    cout << "Please Enter Number ( 2 )\n";
    cin >> Num2;
}
int CheckMaxNumber(int Num1 , int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}
void PrintMaxNumber(int Max)
{
    cout << "The Max Number is " << Max << endl;
}
int main()
{
    int Num1, Num2;
    ReadNumber(Num1, Num2);
    PrintMaxNumber(CheckMaxNumber(Num1,Num2));
}
