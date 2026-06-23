//Write a program to ask the user to enter 3 Number A , B , C ,Then print Max Number in the screen 

#include <iostream>
using namespace std;

void Read3Number(int& A, int& B, int& C)
{
    cout << "Please Enter Number A\n";
    cin >> A;

    cout << "Please Enter Number B\n";
    cin >> B;

    cout << "Please Enter Number C\n";
    cin >> C;

}

int CheckOf3MaxNumber(int A, int B, int C)
{
    if (A > B && A > C)
        return A;
    else if (B > C)
        return B;
    else
        return C;

}

void PrintResult(int Max)
{
    cout << "The Max Number is " << Max << endl;
}


int main()
{
    int A, B, C;
    Read3Number(A, B, C);
    PrintResult(CheckOf3MaxNumber(A, B, C));
}
