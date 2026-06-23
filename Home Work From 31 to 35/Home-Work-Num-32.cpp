#include<iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number" << endl;
    cin >> Number;
    return Number;
}

int ReadPower()
{
    int Power;
    cout << "Please Enter The Power"<< endl;
    cin >> Power;
    return Power;
}


int PowerOfM(int Number , int M)
{
    if(M == 1)
        return M;
        
    int P = 1;
    for(int i = 1; i<= M;i++)    
    {
        P *= Number;
    }
    return P;
}


int main()
{
    cout << "Result = " << PowerOfM(ReadNumber() , ReadPower());
    return 0;
}

