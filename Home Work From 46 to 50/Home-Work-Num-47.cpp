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


float TotalMonths(float LoanAmount , float MonthlyInstallment)
{

    return LoanAmount / MonthlyInstallment;
}

float TotalYears(float LoanAmount,float MonthlyInstallment )
{
    return TotalMonths(LoanAmount,MonthlyInstallment) / 12;
}
int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter  Loan Amount");
    float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment");
    
    
    
    cout << "\nTotal Monthly to Pay " << TotalMonths(LoanAmount , MonthlyInstallment) << endl;
    cout << "\nTotal Years to Pay " << TotalYears(LoanAmount , MonthlyInstallment) <<endl;
    return 0;
}
