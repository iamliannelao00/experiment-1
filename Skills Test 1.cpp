#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double n1;
	double p1;
	double income;
	double tax;

cout << "Pay rate per hour:" ;
cin >> p1;
cout << "Number of Hours each week:" ;
cin >> n1;

cout << "Income before taxes" << "\t" << "Income after taxes" << endl;
cout << n1 * p1 << "" << "\t" << "\t" << "\t" ;
cout << (n1 *p1)-(n1 * p1 * 0.14) << " " << endl;

cout << "Money spent on clothes and other accesories" << endl;
cout << (((n1 *p1)-(n1 * p1 * 0.14))* 0.10)  << "" << endl;

cout << "Money spent on school supplies" << endl;
cout << (((n1 *p1)-(n1 * p1 * 0.14)-(((n1 *p1)-(n1 * p1 * 0.14))* 0.10))* 0.01)<< "" << endl;

cout << "Money spent to buy savings bonds" << endl;
cout <<  (((n1 *p1)-(n1 * p1 * 0.14)-(((n1 *p1)-(n1 * p1 * 0.14))* 0.10)) - (((n1 *p1)-(n1 * p1 * 0.14)-(((n1 *p1)-(n1 * p1 * 0.14))* 0.10))* 0.01) * 0.25)- (((n1 *p1)-(n1 * p1 * 0.14)-(((n1 *p1)-(n1 * p1 * 0.14))* 0.10)) - (((n1 *p1)-(n1 * p1 * 0.14)-(((n1 *p1)-(n1 * p1 * 0.14))* 0.10))* 0.01)) << "" << endl;

_getch();
return 0;
}