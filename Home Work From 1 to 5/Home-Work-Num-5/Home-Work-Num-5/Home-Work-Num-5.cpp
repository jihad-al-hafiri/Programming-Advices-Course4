//Write a program to ask the user to enter his/her Age-Driver license
#include <iostream>
#include <string>
using namespace std;



struct stPerson
{
    short Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stPerson ReadInfo()
{
    stPerson Info;

    cout << "Please Enter Your Age \n";
    cin >> Info.Age;

    cout << "Do you have driver license ? \n";
    cin >> Info.HasDrivingLicense;

    cout << "Do you have recommendation ?\n";
    cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted(stPerson Info)
{
    if (Info.HasRecommendation)
        return true;
    else
        return (Info.Age > 21 && Info.HasDrivingLicense);
}




void PrintResult(stPerson Info)
{
    if (IsAccepted(Info))
        cout << "\nHired" << endl;
    else
        cout << "\nRejicted" << endl;


}

int main()
{
    PrintResult(ReadInfo());

}
