#include<iostream>
#include<string>
#include <cmath>

using namespace std;



float ReadPositiveNumber(string Massge)
{
    float Number = 0 ;
    do
    {
        cout << Massge << endl;
        cin >> Number;
    }while(Number <= 0);
    return Number;
}

float CalculateRemander(float TotalBill , float TotalCashPaid)
{
    return TotalCashPaid - TotalBill;
}


void PrintRemander()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill");
    float TotalCashPaid = ReadPositiveNumber("Pleasd Enter Total Chas Paid");
    
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << TotalCashPaid << endl;
    cout << "----------------------------" << endl;
    cout << "Result = " << CalculateRemander(TotalBill , TotalCashPaid) << endl;
}

int main()
{
    PrintRemander();
    return 0;
} 

