#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a;
	float w,h,bmi;
	string g;

	cout<<"Enter your age : ";
	cin>>a;
	cout<<"Enter Gender : ";
	cin>>g;
	cout<<"Enter weigth : ";
	cin>>w;
	cout<<"Enter heigth : ";
	cin>>h;
	bmi = w/(h/100*h/100);

	cout<<"Your age = "<< a <<endl;
	cout<<"Your gender = "<< g <<endl;
	cout<<"Your weight = "<< w <<endl;
	cout<<"Your height = "<< h <<endl;
	cout<<"Your BMI = "<< bmi <<endl;

	cout<<"You are ";
	if(bmi <= 18.5) cout<<"Underweight\n";
	else if(bmi <= 25) cout<<"Normal\n";
	else if(bmi <= 30) cout<<"Overweight\n";
	else if(bmi <= 40) cout<<"Obesity\n";

	system("pause");
	return(0);
}