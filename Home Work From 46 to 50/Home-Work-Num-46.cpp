#include<iostream>
using namespace std;

void PrintLettersFrom_A_to_Z()
{
    for(int i = 65 ; i <= 90; i++)
    {
        cout << "Letter = " << char(i) << endl;
    }
}



int main()
{
    PrintLettersFrom_A_to_Z();
    return 0;
}
