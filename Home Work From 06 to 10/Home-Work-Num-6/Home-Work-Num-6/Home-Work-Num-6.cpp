

//Write a program to ask the user to  first name and last name and print to on the stcreen

#include <iostream>
#include <string>
using namespace std;

struct stUserName
{
    string FirstName , LastName;
};

stUserName ReadPerson()
{
    stUserName st;
    cout << "Please Enter Your First Name\n";
    getline(cin, st.FirstName);

    cout << "Please Enter Your Last Name\n";
    cin >> st.LastName;

    return st;
}

string GetFullName(stUserName st , bool Reversed)
{
    string FullName = "";
    if(Reversed)
        FullName = st.LastName + " " + st.FirstName;
    else
        FullName = st.FirstName + " " + st.LastName;
    return FullName; 
}

void PrintInfo(string FullName)
{
    cout << "Full Name is " << FullName << endl;
}

int main()
{
    PrintInfo(GetFullName(ReadPerson(),true));
}
