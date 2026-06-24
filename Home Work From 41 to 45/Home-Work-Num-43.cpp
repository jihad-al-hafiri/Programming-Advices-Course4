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

stTaskDuraion SecondsTaskDuraion(int TotalSeconds)
{
    stTaskDuraion TaskDuraion;
    
    const int SecondsPerDay = 24 * 60 * 60 ;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinut = 60;
    
    int Remander =0;
    
    TaskDuraion.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remander = TotalSeconds % SecondsPerDay;
    
    TaskDuraion.NumberOfHours = floor(Remander / SecondsPerHour);
    Remander = Remander % SecondsPerHour;
    
    TaskDuraion.NumberOfMinuts = floor(Remander / SecondsPerMinut);
    Remander = Remander % SecondsPerMinut;
    
    TaskDuraion.NumberOfSoceds = Remander;
     
   return TaskDuraion;
}


void PrintTaskDuraionDitale(stTaskDuraion TaskDuraion)
{
     
     cout << endl;
     cout << TaskDuraion.NumberOfDays
     << ":" << TaskDuraion.NumberOfHours
     << ":" << TaskDuraion.NumberOfMinuts
     << ":" << TaskDuraion.NumberOfSoceds << endl;
     
}


int main()
{
    int TotalSeconds = ReadPositiveNumber("Please enter positive number");
    PrintTaskDuraionDitale(SecondsTaskDuraion(TotalSeconds));
    
    return 0;
}
