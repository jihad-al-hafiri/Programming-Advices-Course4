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
    do 
    {
        PinCode = ReadPinCode();
        if(PinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "Wrong PIN" << endl;
            system ("color 4F");
        }
    }while(PinCode != "1234");
    
    
}



int main()
{
    if(Login())
    {
        system("color 2F");
        cout << "\nYour account balance is " << 7500 << endl;
    }    
    return 0;
}
