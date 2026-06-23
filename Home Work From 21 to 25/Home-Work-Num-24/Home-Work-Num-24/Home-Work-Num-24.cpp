//Write a program to ask the user to enter the Age

#include <iostream>
using namespace std;

int readAge()
{
    int Age;
    cout << "Please Enter Your Age\n";
    cin >> Age;
    return Age;
}

bool CheckOfNumber(int Number , int From , int To)
{
    return (Number >= From && Number <= To);
}
void PrintAge(int Age)
{
    if (CheckOfNumber(Age, 18, 45))
        cout << Age << "is a Valid Age \n";
    else
        cout << Age << "is InValid Age \n";

}
int main()
{
    PrintAge(readAge());

}
