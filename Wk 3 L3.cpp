#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main (){
	
	int price_per_liter = 1.21997, namelength;
	string first_name;
	string last_name;
	string full_name;
	string initial;
	
	
	cout << fixed << setprecision(2);
	cout << "Price List" <<endl;
	cout << setw(10) << "Price per liter: $" << price_per_liter << endl;


	cout << "Please enter your first name." <<endl;
	cin >> first_name;
	cout << "Please enter your last name." <<endl;
	cin >> last_name;
	
	full_name = first_name + " " + last_name;
	namelength = full_name.length() - 1;
	
	if (first_name == "Anav")
	{	
	cout << "Sup Bitch Boy." <<endl;	
	}
	else 
	{
		cout << "Hello " << full_name << "." << endl;
		cout << "Your name is " << namelength << " letters long." <<endl;
	}


	
	
	
	system("PAUSE");
	
	

	return 0;
	
	
}
