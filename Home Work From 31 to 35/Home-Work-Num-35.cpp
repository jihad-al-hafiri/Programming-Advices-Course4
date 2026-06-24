#include<iostream>
using namespace std;

struct stPiggyBankContent
{
    int Pennies ,Nickels ,Dimes ,Quarters ,Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;
    
    cout << "Please Entet a Total Pinnes" << endl;
    cin >> PiggyBankContent.Pennies;
    
    cout << "Please Enter a Total Nickels" << endl;
    cin >> PiggyBankContent.Nickels;
    
    cout << "Please Enter a Total Dimes" << endl;
    cin >> PiggyBankContent.Dimes;
    
    cout << "Please Enter a Total Quarters" << endl;
    cin >> PiggyBankContent.Quarters;
    
    cout << "Please Enter a Total Dollars" << endl;
    cin >> PiggyBankContent.Dollars;
    
    return PiggyBankContent;
}

int CaculateTotalPinnes(stPiggyBankContent PiggyBankConrent)
{
    int TotalPinnes = 0;
    
    TotalPinnes = PiggyBankConrent.Pennies * 1 + 
    PiggyBankConrent.Nickels * 5 + 
    PiggyBankConrent.Dimes * 10 + 
    PiggyBankConrent.Quarters * 25 + 
    PiggyBankConrent.Dollars * 100;
    
    return TotalPinnes;
}


int main()
{
    int TotalPennies = CaculateTotalPinnes(ReadPiggyBankContent());
    
    cout << "---------" << endl;
    cout << "Total Pinnes = " << TotalPennies << endl;
    cout << "Total Dollars = " << (float)TotalPennies / 100 << endl;
    
    return 0;
}
