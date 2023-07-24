#include <iostream>
#include <string>
using namespace std;
int main()
{
	float f,c;
	cout << "Enter degrees fahrenheit : ";
	cin >> f;
	cout <<"Celsius = "<< (5.0/9.0)*(f-32) <<endl;
	c = (5.0/9.0)*(f-32);
	cout << "Celsius = " << c <<endl;
	cout << "Celsius is " << ((c>=30)? "Hot":"Cool") <<endl;
	system("pause");
	return(0);
}