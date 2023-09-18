#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void check_result(int x);
int main()
{
	int num[4],num2[4],total = 0,avg = 0,max = 0,min = 0;
	string name[4];

	for (int i = 0;i < 4;i++){
	cout<<"Name ["<<i<<"] : ";
	cin>>name[i];
	cout<<"Score ["<<i<<"] : ";
	cin>>num[i];
	}
	cout<<endl;
	cout<<"----------------------\n";
	cout<<"Name   Score   result\n";
	cout<<"----------------------\n";
	min = num[0];
	for (int i = 0;i < 4;i++){
	cout<<name[i]<<"\t"<<num[i]<<"\t";
	check_result(num[i]);
	total = total+num[i];
	if(num[i]>max)
		max = num[i];
	else if(num[i]<min)
		min = num[i];
	}
	cout<<"----------------------\n";
	cout<<endl;
	cout<<"Max score = "<<max<<endl;
	cout<<"Min score = "<<min<<endl;
	cout<<"Total = "<<total<<endl;
	cout<<"Average = "<<(float)total/4<<endl;
	system("pause");
	return(0);
}
void check_result(int x)
{
if(x >= 50)
	cout<<"Pass"<<endl;
else
	cout<<"Faile"<<endl;
}