#include <iostream>
#include <string>
using namespace std;
int main()
{
	float FQ,SQ,TQ,MT,FN,QT;
	cout << "===============QUIZZES================"<<endl;
	cout << "Enter first quizz (10) : ";
	cin >> FQ;
	cout << "Enter second quizz (10) : ";
	cin >> SQ;
	cout << "Enter third quizz (10) : ";
	cin >> TQ;
	cout << "===============MID-TERM==============="<<endl;
	cout << "Enter mid-term (40) : ";
	cin >> MT;
	cout << "===============FINAL=================="<<endl;
	cout << "Enter final (50) : ";
	cin >> FN;
	QT = (FQ+SQ+TQ)/3;
	cout << "Quizz total : "<< QT <<endl;
	cout << "Mid-term : "<< MT <<endl;
	cout << "Final : "<< FN <<endl;
	cout << "Total : "<< (MT+FN+QT) <<endl;
	system("puase");
	return(0);
}