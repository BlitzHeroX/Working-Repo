//Danvil Singh (S11220401)
//Program takes the amount of pizza's ordered, displays a total amount due, and calculates the change for 


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	int quantity, cents_change, ten_dollars, five_dollars, two_dollars, one_dollars, fifty_cents, twenty_cents, ten_cents, five_cents;
	double t_price, amount, change;
	const double PIZZA = 10.5 ;	
	const int TEN_DOLLARS = 1000, FIVE_DOLLARS = 500, TWO_DOLLARS = 200, ONE_DOLLARS = 100, FIFTY_CENTS = 50, TWENTY_CENTS = 20, TEN_CENTS = 10, FIVE_CENTS = 5, CENTS_100= 100;
	
	
	
	
	
	
	//header
	cout << "\tChange Calculator Program for Yummy Pizza & Bakery Shop" <<endl;
	cout <<endl;
	cout << "\tYummy Pizza sells only medium-size pizza for $10.50 only" <<endl;
	cout << "\t\tIt\'s the best deal in town\! So come along\!\!\!" <<endl;
	cout <<endl;
	cout << "\t*******************************************************" <<endl;
	cout <<endl;
	
	
	cout << "Enter quantity of pizza ordered:";
	cin >> quantity;  //Quantity of pizza's to be ordered.
	cout <<endl;
	cout <<endl;
	
	t_price = PIZZA * quantity;
	cout <<"Total purchase price is $"<<t_price<<endl;
	
	cout << "Enter amount paid: $";
	cin >>amount;
	
	
	cout <<endl;
	cout <<endl;
	
	change = amount - t_price;
	
	
	if (change > 0){
		cout << "Your change is $"<<change<< ", made up of"<<endl;
	
		cout<<endl;
	
		cents_change = change * CENTS_100;
		ten_dollars = cents_change / TEN_DOLLARS;
		cout << "\t" <<ten_dollars << "\t$10 bills"<<endl;
		
		cents_change -= ten_dollars * TEN_DOLLARS;
		five_dollars = cents_change / FIVE_DOLLARS;
		cout << "\t" <<five_dollars << "\t$5 bills"<<endl;
			
		cents_change -= five_dollars * FIVE_DOLLARS;
		two_dollars = cents_change / TWO_DOLLARS;
		cout << "\t" <<two_dollars << "\t$2 bills"<<endl;
		
		cents_change -= two_dollars * TWO_DOLLARS;
		one_dollars = cents_change / ONE_DOLLARS;
		cout << "\t" <<one_dollars << "\t$1 bills"<<endl;
		
		cents_change -= one_dollars * ONE_DOLLARS;
		fifty_cents = cents_change / FIFTY_CENTS;
		cout << "\t" << fifty_cents << "\t50 cents"<<endl;	
		
		cents_change -= fifty_cents * FIFTY_CENTS;
		twenty_cents = cents_change / TWENTY_CENTS;
		cout << "\t" << twenty_cents << "\t20 cents"<<endl;
		
		cents_change -= twenty_cents * TWENTY_CENTS;
		ten_cents = cents_change / TEN_CENTS;
		cout << "\t" << ten_cents << "\t10 cents"<<endl;
		
		cents_change -= ten_cents * TEN_CENTS;
		five_cents = cents_change / FIVE_CENTS;
		cout << "\t" <<five_cents << "\t5 cents"<<endl;
		
		cout << "Thank you! Have a nice day!"<< endl; 
	
	}
	if (change == 0){
		
		cout << "Thank you! Have a nice day!"<< endl;
	
		
	}
	if (change < 0){
		
		cout << "The current paid amount is insufficient to complete order." <<endl;
		cout << "Please tender correct change."<<endl;
	
	}
	

	
	
	system ("pause");
		


	return 0;
}
