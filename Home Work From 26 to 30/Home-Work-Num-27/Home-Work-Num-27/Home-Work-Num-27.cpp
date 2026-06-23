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

void whileloop_counter(int N)
{
    int Counter = 1;

    cout << "Range printed using while statmement\n";

    while (Counter <= N)
    {
        
        cout << Counter << "  " << endl;
        Counter ++ ;
    }

    cout << "Range printed using while statmement\n";
    cout << "\n-----------------------------------\n";

    Counter = N ++;

    while (Counter  > 1)
    {
        cout << Counter << endl;
        Counter--;

    }



    
}
void DoWhileLoop_Counter(int N)
{
    int Counter = 1;
    cout << "Range printed using Do while statmement\n";

    do
    {
        cout << Counter << endl;
        Counter++;

    } while (Counter <= N);

    cout << "Range printed using Do while statmement\n";
    cout << "\n-----------------------------------\n";

    
    Counter  = N ;

    do
    {

        cout << Counter  << "  " << endl;
        Counter--;

    } while (Counter >= 1);

}

void ForLoop_Counter(int N)
{
    int Counter = 1;
    
    cout << "Range printed using For statmement\n";

    for (int Counter = 1 ; Counter <= N ; Counter ++)
    {
        cout << Counter << "  " << endl;
    }

    cout << "Range printed using For statmement\n";
    cout << "\n--------------------------------\n";

    for (int Counter = N; Counter >= 1; Counter--)
    {
        cout << Counter << "  " << endl;
    };


}



int main()
{
    int N = ReadNumber();
    whileloop_counter(N);
    DoWhileLoop_Counter(N);
    ForLoop_Counter(N);

}
