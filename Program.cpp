#include <iostream>
#include <string>
using namespace std;
int main()
{
	char menu;
	int amount;
	float result = 0.0;
	cout<<"Press 1 : Enter Amount : "<<endl;
	cout<<"Press 2 :Interest 7 %"<<endl;
	cout<<"Press 3 :Interest 5 %"<<endl;
	cout<<"Press 0 : Exit"<<endl;

	do{
		cout<<"Enter menu : ";
		cin>>menu;
		if (menu == '1'){
		cout<<"Enter Amount : ";
		cin>>amount;
		}
		else if (menu == '2')
		{	result = amount * 0.07;
			cout<<" 7% of "<<amount<<"="<<(amount=result)<<endl;
		}
		else if (menu == '3')
		{	result = amount * 0.05;
			cout<<" 5% of "<<amount<<"="<<(amount=result)<<endl;
		}
		else if 
		cout<<"Invalid Menu! Please choose again"<<endl;
	
	}while(menu != '0');
	return(0);
}