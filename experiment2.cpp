#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double mass;
	double density;
	double volume;

	cout << "Input mass(g), density(cubic cm), and volume" << endl;
	
	cout << "\ninput mass: " << endl;
	cin >> mass ;

	cout << "\ninput density: " << endl;
	cin >> density ;

	volume = mass / (4*density);

	cout << "volume=" << volume <<"cm^3"<< endl;

	system("pause");


_getch();
return 0;
}