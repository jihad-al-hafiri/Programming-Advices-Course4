//Write a program to print number from 1 to N

#include <iostream>
using namespace std;

int ReadNumber()
{
    int N;
    cout << "Please enter the number \n";
    cin >> N;
    return N;
}

int whileloop_counter(int N)
{
    int Counter = 0;

    cout << "Range printed using while statmement\n";

    while (Counter < N)
    {
        Counter = Counter +1;
        cout << Counter << endl;
    }
    return N;
}

void PrintResult(int counter )
{
    cout << "Counter is " << counter << endl;
}

int main()
{
    PrintResult(whileloop_counter(ReadNumber()));
}
