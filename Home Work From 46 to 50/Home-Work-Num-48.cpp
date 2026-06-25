#include<iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    
    do
    {
        cout << Message << endl;
        cin >> Number;
        
    }while(Number <= 0);
    
    return Number;
}


float MonthlyInstallment(float LoanAmount , float HowManyMonth)
{

    return (float)LoanAmount / HowManyMonth;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter  Loan Amount");
    float HowManyMonth = ReadPositiveNumber("How Many Nomths?");
    
    
    
    cout << "\nMonthly Installment " << MonthlyInstallment(LoanAmount , HowManyMonth) << endl;
    
    return 0;
}
