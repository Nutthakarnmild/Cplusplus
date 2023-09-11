#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length,const float Widht);
float Area(const float base, const double height);
float Area(const double W1,const double W2,const double height);
int main()
{	
	char Choice;
	bool Flag = true;
	do{
		DisplayMenu();
		cin>>Choice;
		if(Choice == '1'){
				float Radius;
				cout<<"\nEntrer radius : ";
				cin>>Radius;
				cout<<"Area of Circle = " << fixed;
				cout<<setprecision(2)<<Area(Radius)<<endl;
		}
		else if (Choice == '2') {
				float Length,Widht;
				cout<<"Enter length and width : ";
				cin>>Length>>Widht;
				cout<<"Area of Rectangle = " << fixed;
				cout<<setprecision(2) << Area(Length,Widht);
		}
		else if (Choice == '3'){
				float base;
				double height;
				cout<<"Enter base and width : ";
				cin>>base>>height;
				cout<<"Area of Triangle = "<<fixed;
				cout<<setprecision(2) << Area(base,height);
		}
		else if (Choice == '4'){
				double W1,W2,height;
				cout<<"Enter W1,W2,Height : ";
				cin>>W1>>W2>>height;
				cout<<"Area of Trapezoid = "<<fixed;
				cout<<setprecision(2) << Area(W1,W2,height);
		}
		else if (Choice == '5') Flag = false;
		else{
				cout<<"\nYou choose out of ranfe is ";
				cout<<"not process\n";
		}	
	}while(Flag);
	cout<<"\n...Exot Program...\n";
	return(0);
}

float Area(const float Radius)
{
	return(3.14259F*Radius*Radius);
}

float Area(const float Length,const float Widht)
{
	return(Length*Widht);
}

float Area(const float base,const double height)
{
	return(0.5*base*height);
}

float Area(const double W1,const double W2,const double height)
{
	return(0.5*(W1+W2)*height);
}

void DisplayMenu()
{
	cout<<endl;
	cout<<"Program Calculate Area "<< endl;
	cout<<"1. Circle"<<endl;
	cout<<"2. Ractangle"<<endl;
	cout<<"3. Triangle"<<endl;
	cout<<"4. Traprziod"<<endl;
	cout<<"5. Exit"<<endl;
	cout<<"Enter your choose number : ";
}