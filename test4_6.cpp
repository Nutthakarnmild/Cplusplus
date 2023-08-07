#include <iostream>
#include <string>
using namespace std;
int main()
{
	/*for (int n = 100; n >= 1; n=n-5 )
		cout<<n<<" ";
		cout<<endl;

	int Number;
	string Name;
	cout<<"Enter string : ";
	cin>>Name;
	cout<<"Enter number : ";
	cin>>Number;
	for (int n = 1 ; n <= Number ; n++)
		cout<<n<<" : "<<Name<<endl;

	int Number,score,total = 0;
	cout<<"Enter number of student : ";
	cin>>Number;
	for (int n = 1 ; n <= Number ; n++)
	{
		cout<<"Enter score : "<< n <<" : ";
		cin>>score;
		total = total+score;
	}
	cout<<"Total score = "<<total<<endl;
	cout<<"Avg. Score = "<<total/(float)Number<<endl;*/

	int num1,num2,total = 0;
	cout<<"Enter num1 : ";
	cin>>num1;
	cout<<"Enter num2 : ";
	cin>>num2;
	for (int n = 1 ; n <= num2 ; n++ )
	{
	cout<<num1<<" x "<<n<<" = "<<num1*n<<endl;
	total = total+(num1*n);
	}
	cout<<"Total = "<<total<<endl;
	cout<<"Avg. = "<<total/(float)num2<<endl;
	cout<<endl;
	system("pause");
	return(0);
}