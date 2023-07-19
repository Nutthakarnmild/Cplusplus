#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<< "Amount to be withdrew : ";
	cin>> a; 
	cout<< "1000 = "<< a/1000<<endl;
	cout<< "500 = "<< (a%1000)/500<<endl;
	cout<< "100 = "<< (a%500)/100<<endl;
	return(0);
}