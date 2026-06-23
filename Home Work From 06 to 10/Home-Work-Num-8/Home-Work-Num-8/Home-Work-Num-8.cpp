//Write a program to ask the user to enter the Mark if Mark >=50 print Pass otherwise Fail
#include <iostream>
#include <string>
using namespace std;

enum enPassFail {Pass = 1 , Fail = 2};

int ReadMark()
{
    int Mark;
    cout << "Please Enter Your Mark 1\n";
    cin >> Mark;
    return Mark;
}

enPassFail CheckMarks(int Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintAvrage(int Mark )
{
    
    if (CheckMarks(Mark) == enPassFail::Pass)
        cout << "You Passed\n";
    else
        cout << "You Failed\n";
}

int main()
{
    PrintAvrage(ReadMark());
}
