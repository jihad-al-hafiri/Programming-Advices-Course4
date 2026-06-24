#include<iostream>
#include<string>
#include <cmath>

using namespace std;

struct stTaskDuraion
{
    int NumberOfDays , NumberOfHours , NumberOfMinuts , NumberOfSoceds;
    
};

float ReadPositiveNumber(string Massge)
{
    float Number = 0 ;
    do
    {
        cout << Massge << endl;
        cin >> Number;
    }while(Number <= 0);
    return Number;
}

stTaskDuraion ReadTaskDuraion()
{
    stTaskDuraion TaskDuraion;
    
   TaskDuraion.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days");
   TaskDuraion.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours");
   TaskDuraion.NumberOfMinuts = ReadPositiveNumber("Please Enter Number Of Minuts");
   TaskDuraion.NumberOfSoceds = ReadPositiveNumber("Please Enter Number Of Socnds"); 
   
   return TaskDuraion;
}


int TaskDuraionOfSocnds(stTaskDuraion TaskDuraion)
{
     
     int DuraionInSoconds = 0;
     DuraionInSoconds = TaskDuraion.NumberOfDays * 24 * 60 * 60 ;
     DuraionInSoconds += TaskDuraion.NumberOfHours * 60 * 60 ;
     DuraionInSoconds += TaskDuraion.NumberOfMinuts * 60 ;
     DuraionInSoconds += TaskDuraion.NumberOfSoceds;
     
     return DuraionInSoconds;
     
}


int main()
{
    cout << "Task Duraion In Socondes : " << TaskDuraionOfSocnds(ReadTaskDuraion()) << endl;
    return 0;
} 
