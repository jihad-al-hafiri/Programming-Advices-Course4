#include<iostream>
using namespace std;

enum enOpraionType
{
    Add = '+',Subtract = '-' , Multyply = '*' ,Divide = '/'
};

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

float Calculate(float Number1 ,float Number2 ,enOpraionType Opraion)
{
    switch (Opraion)
    {
        case enOpraionType::Add:
            return Number1 + Number2;
        case enOpraionType::Subtract:
            return Number1 - Number2;
        case enOpraionType::Multyply:
            return Number1 * Number2;
        case enOpraionType::Divide:
            return Number1 / Number2;
        default:
            return Number1 + Number2;    
    }
}



int main()
{
    float Number1 = ReadNumber("Please Enter Number 1");
    float Number2 = ReadNumber("Please Enter Number 2");
    enOpraionType OType = ReadType();
    
    cout << "Result = " << Calculate(Number1 ,Number2 ,OType) << endl;
    return 0;
}
