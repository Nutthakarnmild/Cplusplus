#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	float Salary,comm,sale;
	cout <<"Enter name : ";
	cin >> name;
	cout <<"Enter Salary : ";
	cin >> Salary;
	cout <<"Enter Sale : ";
	cin >> sale;
	cout <<"Enter Commission Percent : ";
	cin >> comm;
	cout <<"your name = "<< name <<endl;
	cout <<"total Revenue = "<< Salary+(sale*(comm/100)) <<endl;
	system("pause");
	return(0);
}