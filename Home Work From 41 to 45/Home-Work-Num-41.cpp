#include<iostream>
#include<string>
#include <cmath>

using namespace std;



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

float HoursToDay(float NumberOfHours)
{
     
     return (float)NumberOfHours / 24;
}

float HoursToWeek(float NumberOfHours)
{
    return (float)NumberOfHours / 24 / 7 ;
}

float DaysToWeeks(float NumberOfDays)
{
    return (float)NumberOfDays / 7;
}

void PrintConvertHoursIntoDaysAndWeek()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours");
    float HoursOfDays = HoursToDay(NumberOfHours);
    float NumberOfWeek = DaysToWeeks(HoursOfDays);
    
    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << HoursOfDays << endl;
    cout << "Total Week = " << NumberOfWeek << endl;
}

int main()
{
    PrintConvertHoursIntoDaysAndWeek();
    return 0;
} 
