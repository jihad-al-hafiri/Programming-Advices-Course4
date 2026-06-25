#include<iostream>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please Enter PIN Code" << endl;
    cin >> PinCode;
    
    return PinCode;
    
}

bool Login()
{
    string PinCode;
    int Counter=3;
    do 
    {
        Counter--;
        PinCode = ReadPinCode();
        if(PinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "Wrong PIN , You Have " << Counter << "More Tries"<< endl;
            system ("color 4F");
            
        }
    }while(Counter >= 1 && PinCode != "1234");
    
    
}



int main()
{
    if(Login())
    {
        system("color 2F");
        cout << "\nYour account balance is " << 7500 << endl;
    }    
    else 
    {
        cout << "\nYour card is blocked call the bank for help" << endl;
    }
    return 0;
}
