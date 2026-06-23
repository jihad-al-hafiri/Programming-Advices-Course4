#include<iostream>
using namespace std;

int ReadTotalSales()
{
    int TotalSales;
    
    cout << "Please Enter a Total Sales" << endl;
    cin >> TotalSales;
    
    return TotalSales;

}

float GetComissionPercentage(int TotalSales)
{
    if(TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)    
        return 0.02;
    else if (TotalSales >= 100000)    
        return 0.03;
    else if(TotalSales >= 50000) 
        return 0.05;
    else
        return 0.00;       
}

float CalculateTotalComisdion(float TotalSales)
{
    return GetComissionPercentage(TotalSales) * TotalSales;
}



int main()
{
    float TotalSales = ReadTotalSales();
    
    cout << "\nComission Percentage " << GetComissionPercentage(TotalSales) << endl;
    cout << "\nTotal Comission = " << CalculateTotalComisdion(TotalSales) << endl;
    
}    

