#include<iostream>
#include<string>
#include <cmath>

using namespace std;

enum enMonthOfYear{Jan = 1 , Feb = 2 , Mar = 3 , Apr = 4 , May = 5 , Jun = 6 , Jul = 7 , Aug = 8 , Sep = 9 ,Oct = 10 ,Nov =11 ,Dec = 12};

float ReadNumberInRange(string Message , int From , int To)
{
    float Number = 0 ;
    do
    {
        cout << Message << endl;
        cin >> Number;
    }while(Number < From || Number > To);
    return Number;
}

enMonthOfYear ReadMonthOfYears()
{
   return (enMonthOfYear)ReadNumberInRange("Please Enter Month Year Number\n( January = 1 )\n( February = 2 )\n( March = 3 )\n( April = 4 )\n( May = 5 )\n( June = 6 )\n( July = 7 )\n( August = 8 )\n( September = 9 )\n( October = 10 )\n( November = 11 )\n( December = 12 )\n-------------------\n", 1 ,12);
   
}


string GetMonthOfYear(enMonthOfYear Month)
{
    switch(Month)
    {
        case enMonthOfYear::Jan:
            return "January";
        case enMonthOfYear::Feb:
            return "February";
        case enMonthOfYear::Mar:
            return "March";
        case enMonthOfYear::Apr:
            return "April";
        case enMonthOfYear::May:
            return "May";
        case enMonthOfYear::Jun:
            return "June";
        case enMonthOfYear::Jul:
            return "July";
        case enMonthOfYear::Aug:
            return "August";
        case enMonthOfYear::Sep:
            return "September";
        case enMonthOfYear::Oct:
            return "October";
        case enMonthOfYear::Nov:
            return "November";
        case enMonthOfYear::Dec:
            return "December";                
        default:
            return "Not a valid Month";
    }
     
}


int main()
{
    cout << GetMonthOfYear(ReadMonthOfYears())<< endl;
    
    return 0;
}
