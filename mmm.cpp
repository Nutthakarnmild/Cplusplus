#include <iostream>
using namespace std;
void CalCircle();
void CalRec();
int main()
{		char Ch;
	do{
		cout<<"****************************"<<endl;
		cout<<"Program Calculate of Circle."<<endl;
		cout<<"****************************"<<endl;
		cout<<endl;
		cout<<"1.Circle\n2.Ractangle\n3.Exit\n";
		cout<<endl;
		cout<<"Choose Menu : ";
		cin>>Ch;
		if(Ch == '1') CalCircle();
			else if (Ch == '2') CalRec();
			else if (Ch == '3') cout<<"Exit"<<endl;
			else cout<<"Wrong Menu"<<endl;
	}while(Ch != '3');
	system("pause");
}

void CalCircle()
{
	float Radius,Area,Circumference;
	cout<<"Input redius : ";
	cin>>Radius;
	Area = 3.14f*Radius*Radius;
	Circumference = 2*3.14f*Radius;
	cout<<"Area of circle : "<<Area<<endl;
	cout<<"Circumference of circle : "<<Circumference<<endl;
	cout<<"Diameter of circle : "<<(2*Radius)<<endl;
}

void CalRec()
{
	float Width,Length,Area;
	cout<<"Input Width : ";
	cin>>Width;
	cout<<"Input Length : ";
	cin>>Length;
	Area = Width*Length;
	cout<<"Area of Ractangle : "<<Area<<endl;
}
