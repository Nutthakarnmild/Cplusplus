#include <iostream>
#include <string>
using namespace std;
int main()
{
	float f;
	cout << "Enter degrees fahrenheit : ";
	cin >> f;
	cout <<"Celsius = "<< (5.0/9.0)*(f-32) <<endl;
	system("pause");
	return(0);
}