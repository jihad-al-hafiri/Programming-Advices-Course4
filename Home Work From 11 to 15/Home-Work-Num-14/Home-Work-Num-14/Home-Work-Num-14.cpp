//Write a program to ask the user to enter 2 number , Then print tow numbers , then swep tow numbers and print then in the screen 

#include <iostream>
using namespace std;

void Read2Numbers(int& Num1, int& Num2)
{
    cout << "Please Enter Number ( 1 )\n";
    cin >> Num1;

    cout << "Please Enter Number ( 2 )\n";
    cin >> Num2;

    cout << "--------------------------\n" << endl;

}

void SwepNumbers(int &Num1, int &Num2)
{
    int Swep;
    Swep = Num1;
    Num1 = Num2;
    Num2 = Swep;
    cout << "\n";
}

void PrintNumber(int Num1 , int Num2)
{
    cout  << Num1 << endl <<"-----\n" << Num2 << endl;
}


int main()
{
    int Num1, Num2;
    Read2Numbers(Num1, Num2);
    PrintNumber(Num1, Num2);
    SwepNumbers(Num1, Num2);
    PrintNumber(Num1, Num2);
}
