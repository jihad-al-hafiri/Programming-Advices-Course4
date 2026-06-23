
//Write a program 

#include <iostream>
using namespace std;

enum enOddorEven{Odd = 1 , Even = 2};

int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number" << endl;
    cin >> Number;
    return Number;
}

enOddorEven CheckOddEven(int Number)
{
    if(Number % 2 != 0)
        return enOddorEven::Odd;
    else
        return enOddorEven::Even;
}

int SumOddFrom1ToNumber_usingFor(int Number)
{
    cout << "Sum Even Numbers using fro stetmant" << endl;
    int Sum = 0 ;
    for(int Counter = 1 ; Counter <= Number ; Counter++)
    {
        if(CheckOddEven(Counter) == enOddorEven::Even)
        {
            Sum += Counter;
        }
    }
    return Sum;
}

int SumOddFrom1ToNumber_usingWhileStetmant(int Number)
{
    int Counter = 1;
    int Sum = 0;
    
    cout << "Sum Even Numbers Using While Stetmant" << endl;
    
    while(Counter <= Number)
    {
        if(CheckOddEven(Counter) == enOddorEven::Even)
        {
            Sum += Counter;
        }
        Counter++;
    }
    return Sum;
    
}

int SumOddFrom1ToNumber_usingDoWhileStatement(int Number)
{
    int Counter = 1;
    int Sum =0;
    
    cout << "Sum Even Numbers using Do While Statement" << endl;
    
    do
    {
        if(CheckOddEven(Counter) == enOddorEven::Even)
        {
            Sum += Counter;
        }
        Counter++;
    }while(Counter <= Number);
    return Sum;
}



int main()
{
    int Number = ReadNumber();
    
    cout << SumOddFrom1ToNumber_usingFor(Number) << endl;
    cout << "--------------------------------" << endl;
    cout << SumOddFrom1ToNumber_usingWhileStetmant(Number) << endl;
    cout << "--------------------------------" << endl;
    cout << SumOddFrom1ToNumber_usingDoWhileStatement(Number) << endl;
}
