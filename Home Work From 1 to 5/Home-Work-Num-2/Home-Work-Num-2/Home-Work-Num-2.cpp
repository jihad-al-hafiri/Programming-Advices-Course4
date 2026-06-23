//Write a Program to ask the user the FirstName and Last Name 

#include <iostream>
#include <string>
using namespace std;



string ReadUserName()
{
    string Name;
    cout << "Please Enter Your Name : \n";
    getline(cin, Name);



    return Name;
}

void PrintName(string Name)
{
    cout << "Your Name is " << Name << endl;

}

int main()
{
    PrintName(ReadUserName());
}
