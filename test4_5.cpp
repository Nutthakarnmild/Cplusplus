#include <iostream>
#include <string>
using namespace std;
int main()
{
	char Choice;
	float Area;
	cout<<"Program Calculate Area "<<endl;
	cout<<"1. Clrcle"<<endl;
	cout<<"2. Ractangle"<<endl;
	cout<<"3. Right-angied Triangle"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Enter your choose number : ";
	cin>>Choice;
	if(Choice == '1')
	{
		float Radius;
		cout<<"\nEnter radius : ";
		cin>>Radius;
		Area = 3.14159 * Radius * Radius;
		cout<<"Area of Circle = "<<Area<<endl;
	}
	else if (Choice == '2')
	{
		float Length,Width;
		cout<<"Enter length and width : ";
		cin>> Length >> Width;
		Area = Length*Width;
		cout<<"Area of Rectangle = "<<Area<<endl;
	}
	else if (Choice == '3')
	{
		float base,heigth;
		cout<<"Enter base and heigth : ";
		cin>> base >> heigth;
		Area = 1/2 * base * heigth;
		cout<<"Right-angied Triangle = "<<Area<<endl;
	}
	else if(Choice == '4')cout<<"\n...Exit Program...\n";
	else cout<<"\nYou choose out range is not process.\n";
	return(0);
}