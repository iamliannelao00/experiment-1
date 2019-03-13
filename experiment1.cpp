#include<iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double Ticketprice1;
	double NumberOfTicketSold1;
	double Ticketprice2;
	double NumberOfTicketSold2;
	double Ticketprice3;
	double NumberOfTicketSold3;
	double Ticketprice4;
	double NumberOfTicketSold4;
	setprecision(2);


cout << "Box Ticketprice: " ;
cin >> Ticketprice1 ; 
cout << "Number of Ticket Sold: " ;
cin >> NumberOfTicketSold1 ; 

cout << "Sideline Ticketprice: " ;
cin >> Ticketprice2 ; 
cout << "Number of Ticket Sold: " ;
cin >> NumberOfTicketSold2 ; 

cout << "Premium Ticketprice: " ;
cin >> Ticketprice3 ; 
cout << "Number of Ticket Sold: " ;
cin >> NumberOfTicketSold3 ; 

cout << "General Admission Ticketprice: " ;
cin >> Ticketprice4 ; 
cout << "Number of Ticket Sold: " ;
cin >> NumberOfTicketSold4 ; 

cout << "Ticket Price		Number Of Ticket Sold		Total Sale Amount" << endl;
cout << setprecision(2) << Ticketprice1		<< " " << NumberOfTicketSold1 << " "	<< Ticketprice1 * NumberOfTicketSold1 << endl;
cout << Ticketprice2 << NumberOfTicketSold2 << Ticketprice2 * NumberOfTicketSold2 << endl;

_getch();
return 0;
}

