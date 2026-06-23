//Write a program to ask the user to enter the Number and print on the screen half number
#include <iostream>
#include <string>
using namespace std;

float ReadNumber()
{
    float Num;
    cout << "Please Enter a Number : \n";
    cin >> Num;

    return Num;

}

float CaluclateNumber(float Num)
{
    float Caluclate = Num / 2;
    return Caluclate;
}

void PrintNumber(float Caluclate)
{
    string Result = "Half of " + to_string(Caluclate) + " is " + to_string(CaluclateNumber(Caluclate));
    cout << Result << endl;
}

int main()
{
    PrintNumber(ReadNumber());
}
