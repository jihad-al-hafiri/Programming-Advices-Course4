#include<iostream>
#include<string>
using namespace std;


float ReadNumber(string Massge)
{
    float Number = 0;
    cout << Massge << endl;
    cin >> Number;
    
    return Number;
}

enOpraionType ReadType()
{
    char OT = '+';
    cout << "Please Enter Opration Type" << endl;
    cin >> OT;
    
    return (enOpraionType)OT;
    
}

float SumNumbers()
{
    int Sum =0 , Number =0 , Counter =1;
    
    do
    {
        Number = ReadNumber("Please Enter a Number" + to_string(Counter));
        if(Number == -90)
            break;
        Sum += Number;
        Counter++;    
    }while(Number != -90);
    return Sum;

}



int main()
{
   
    
    cout << "Result = " << SumNumbers() << endl;
    return 0;
}
