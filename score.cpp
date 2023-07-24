#include <iostream>
#include <string>
using namespace std;
int main()
{
	float s;
	cout << "Enter score : ";
	cin >> s;
	cout << "You "<< ((s>=50)? "Pass":"Fail") << " with score" << s <<endl; 
	system("pause");
	return(0);
}
