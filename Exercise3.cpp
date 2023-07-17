#include <iostream>
#include <string>
using namespace std;
int main()
{
	float w;
	float h;
	cout << "Enter weigth :";
	cin >> w;
	cout << "Enter heigth :";
	cin >> h;
	cout <<"BMI = "<< w/(h/100*h/100) <<endl;
	system("pause");
	return(0);
}