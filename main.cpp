#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	double n1, n2;
	char oper;
	cout << "Input 1st number: " << endl;
	cin >> n1;
	cout << "Choose operator: \n+ (sum)\n- (substraction)\n/ (division)\n * multiplication\n";
	cin >> oper;
	cout << "Input 2nd number: " << endl;
	cin >> n2;
	switch (oper)
	{
		case '+':
			cout << Sum(n1, n2)<<endl;
			break;
   		case '-':
			cout << Sub(n1, n2)<<endl;
			break;
		case '*':
			cout << Mul(n1, n2) << endl;
			break;
		case '/':
			cout << Div(n1, n2) << endl;
			break;
		default:
			cout << "Sorry, function is developing"<<endl;
	}
	system("pause");
	return 0;
}

