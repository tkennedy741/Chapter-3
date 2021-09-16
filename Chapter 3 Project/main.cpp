#include <iostream>
#include <iomanip>
using namespace std;

string firstEmployeeName, secondEmployeeName;
double firstEmployeeSalary, secondEmployeeSalary;

int main()
{
    //getting the first employees information
    cout << "Please input the First and last Name of the first employee: \n";
    getline(cin, firstEmployeeName);
    cout << "What is " << firstEmployeeName << "'s salary?\n";
    cin >> firstEmployeeSalary;

    //getting the second employees information
    cout << "Please input the First and last Name of the second employee: \n";
    getline(cin, secondEmployeeName);
    cout << "What is " << secondEmployeeName << "'s salary?\n";
    cin >> secondEmployeeSalary;

    cout << firstEmployeeName << firstEmployeeSalary << endl << secondEmployeeName << secondEmployeeSalary << endl;
    return 0;
}
