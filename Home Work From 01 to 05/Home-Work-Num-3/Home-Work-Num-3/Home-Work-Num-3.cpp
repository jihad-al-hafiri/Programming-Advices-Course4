//write a program to read number if odd / even.


#include <iostream>
#include <string>
using namespace std;

enum enNumber {Odd = 1 , Even = 2};

int ReadNumber()
{
    int Num;
    cout << "Enter The Number Please : \n";
    cin >> Num;
    return Num;
}
enNumber CheckNum(int Num)
{
    int Result = Num % 2;

    if (Result == 0)
    {
        return enNumber::Even;
    }
    else
    {
        return enNumber::Odd;
    }
}
void PrintNumbrtType(enNumber NumberType)
{
    if (NumberType == enNumber::Even)
        cout << "\nNumber is Even\n";
    else
        cout << "\nNumber is Odd\n";
    
}

int main()
{
    PrintNumbrtType(CheckNum(ReadNumber()));
}
