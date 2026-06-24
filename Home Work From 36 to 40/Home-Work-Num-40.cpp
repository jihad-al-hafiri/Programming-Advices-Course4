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

float TotalBillAfterServiceAndTax(float TotalBill)
{
     TotalBill *= 1.1;
     TotalBill *= 1.16;
     
     return TotalBill;
}


void PrintTotalBillAfterServiceAndTax()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill");
    
    
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After service and sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;
    cout << "----------------------------" << endl;
}

int main()
{
    PrintTotalBillAfterServiceAndTax();
    return 0;
} 
