#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	
	char category;
	double hours_worked;
	double extra_hours;
	double wage;
	double net_wage;
	const int HOURS = 40;
	const double MHOURLYRATE = 10.6;
	const double MTAXRATE = 0.35;
	const double FHOURLYRATE = 8.3;
	const double FTAXRATE = 0.2;
	const double OVERTIME = 1.5;
	
	cout << "*****************************************"<<endl;
	cout << "* Wage Calculator for Shoe Lace Company *" <<endl;
	cout << "*****************************************"<<endl;
	
	cout << "Enter Category: 'M' for Management, 'F' for Floor Worker. " <<endl;
	cin >> category;
	while (category != 'M' || category != 'F'){
		if (category == 'M' || category == 'F'){
			
			break;
		}
		else{
			
			cout << "Input Invalid. Try Again."<<endl;
			cin >> category;
			
		}
	}
	

	
	cout << "Enter Hours Worked: "<<endl; 
	cin >> hours_worked;
	if (cin.fail()){
		
		cin.clear();
		cin.ignore();
 		cout << "Input Not Recognized. Please try again." << endl;
 		cin >> hours_worked;
 		
	}
	cout <<endl;
	
	cout << "\tSummary:"<<endl;
	cout << "\t--------"<<endl;
	cout <<"\tStaff Category: " <<category<<endl;
	cout <<"\tHours Worked: " <<hours_worked<<endl;
	cout <<endl;
	
	if (category == 'M'){
		if (hours_worked <= 40 ){
			wage = hours_worked * MHOURLYRATE;
			net_wage = wage - ( wage * MTAXRATE );
	
			cout << "\tNET WAGE: $" <<net_wage<<endl;		
		}
		else if (hours_worked > 40){
			wage = (HOURS * MHOURLYRATE) + ((hours_worked - HOURS) * (MHOURLYRATE * OVERTIME));
			net_wage = wage - ( wage * MTAXRATE );
			
			cout << "\tNET WAGE: $" <<net_wage<<endl;
		}
}	
	else if (category =='F'){
		if (hours_worked <= 40 ){
			wage = hours_worked * FHOURLYRATE;
			net_wage = wage - ( wage * FTAXRATE );
		
			cout << "\tNET WAGE: $" <<net_wage<<endl;		
		}
		else if (hours_worked > 40){
			wage = (HOURS * FHOURLYRATE) + ((hours_worked - HOURS) * (FHOURLYRATE * OVERTIME));
			net_wage = wage - ( wage * FTAXRATE );
			
			cout << "\tNET WAGE: $" <<net_wage<<endl;
		}
	}
	else{
		
		cout <<"\tNETWAGE: Error Recognized."<<endl;
	}	
		cout <<endl;
	
		system ("PAUSE");	


	return 0;
}
