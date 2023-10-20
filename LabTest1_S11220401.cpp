// CS111 Lab Test 1 2023 //
// Name : Danvil Singh   //
// Student ID: S11220401 //
// Date : 01/09/2023     //

// Program Description : This program first requests the user to enter the type of cleaning service //
//                       that is desired, which is followed by the user entering the duration       //
//                       in hours of service, as well as the indication of inclusion of cleaning    //
//                       supplies. The program calculates and displays the amount to be charged.    //


// Code Beginning //

#include <iostream>
#include <string>

using namespace std;

int main (){
	
	// Variable Declaration //
	
	int service;
	double duration;
	double cost;
	char add_service;
	string id = "";					// initialised id in order to allow loop to run the first time //
	bool active;
	
	
	// Constant Declaration //

	const int FIRST_TYPE = 1;			//	For Regular Cleaning   //
	const int SECOND_TYPE = 2;			//	For Deep Cleaning 	   //
	const int THIRD_TYPE = 3;			//	For Move-Out Cleaning  //
	const double FIRST_RATE = 25;
	const double SECOND_RATE = 35;
	const double THIRD_RATE = 45;
	const double ADD_COST = 20;
	const double MIN_DURATION = 1;		// For boundaries in failed inputs //
	const double MAX_DURATION = 55;
	
	
	// Heading of Code //
	cout << "--------------------------------------------------" <<endl;
	cout << "|       House Cleaning Service Calculator        |" <<endl;
	cout << "|________________________________________________|" <<endl;
	
	if (id != "S11220401"){					// if statement for proceeding with code //
		active = true;
	}
	else if (id == "S11220401"){			// if statement for exiting code //
		active = false;
	}
		
	while (active){							// while loop runs while bool active is true //
		cout << endl;
		cout << "Service Types: " <<endl;
		cout << endl;
		cout << "\t1.) Regular Cleaning Service ($25/Hr). " <<endl;
		cout << "\t2.) Deep Cleaning Service ($35/Hr). " <<endl;
		cout << "\t3.) Move-Out Cleaning Service ($45/Hr). " <<endl;
		cout << endl;
		
		cout << "Which cleaning service type is required? Please enter a number 1-3 as per the list. " <<endl;
		cin >> service;
		
		while (cin.fail() || service < FIRST_TYPE || service > THIRD_TYPE){		//accounting for failed inputs//
			if (cin.fail()){
				cin.clear();								//clear current stored input in service//
				string dummy;								//declare dummy string//
				cin >> dummy;								//store invalid inputs in dummy string//
				cout << "Please enter a valid value according to the list." <<endl;
				cin >> service;
			}
			else if (service < FIRST_TYPE || service > THIRD_TYPE){
				cin.clear();								//clear invalid value//
				cout << "Please enter a valid value according to the list." <<endl;
				cin >> service;
			}
		}
		
		cout << "Please enter the total duration (in hours) requrired for the service." <<endl;
		cin >> duration;
		
		while (cin.fail() || duration <= MIN_DURATION || duration >= MAX_DURATION){
			if (cin.fail()){
				cin.clear();
				string dummy;
				cin >> dummy;
				cout << "Please enter a valid value for duration. " <<endl;
				cin >> duration;
			}
			else if (duration <= MIN_DURATION || duration >= MAX_DURATION){
				cin.clear();
				cout << "Please enter a valid value for duration. " <<endl;
				cin >> duration;
			}
		}
		
		cout << "Are cleaning supplies to be included in the cost. Please enter 'Y' if yes, or 'N' if no. " << endl;
		cin >> add_service;
		
		while (cin.fail() || add_service != 'Y' && add_service != 'N' && add_service != 'y' && add_service != 'n'){
			if (cin.fail()){
				cin.clear();
				string dummy;
				cin >> dummy;
				cout << "Please enter a valid response. " <<endl;
				cin >> add_service;
			}
			else if (add_service != 'Y' && add_service != 'N' && add_service != 'y' && add_service != 'n'){
				cin.clear();
				cout << "Please enter a valid response. " <<endl;
				cin >> add_service;
			}
		}
		
		if (add_service == 'Y' || add_service == 'y'){		//if additional cost is to be taken//
			cout << "Summary: " <<endl;
			cout << "------------------------------------------------" <<endl;
			cout << "\tService Type: Type " <<service<< endl;
			cout << "\tDuration: " <<duration<< " hours" <<endl;
			cout << "\tAdditional Supplies Inclusion: Yes" <<endl;
			cout <<endl;
			
			if (service == FIRST_TYPE){
				cost = (duration * FIRST_RATE) + ADD_COST;
			}
			else if (service == SECOND_TYPE){
				cost = (duration * SECOND_RATE) + ADD_COST;
			}
			else if (service == THIRD_TYPE){
				cost = (duration * THIRD_RATE) + ADD_COST;
			}
			
			cout << "Total Cost: $" <<cost<<endl;
		}
		else if (add_service == 'N' || add_service == 'n'){		//if additional cost is not to be taken//
			cout << "Summary: " <<endl;
			cout << "------------------------------------------------" <<endl;
			cout << "\tService Type: Type " <<service<< endl;
			cout << "\tDuration: " <<duration<< " hours" <<endl;
			cout << "\tAdditional Supplies Inclusion: No" <<endl;
			cout <<endl;
			
			if (service == FIRST_TYPE){
				cost = duration * FIRST_RATE;
			}
			else if (service == SECOND_TYPE){
				cost = duration * SECOND_RATE;
			}
			else if (service == THIRD_TYPE){
				cost = duration * THIRD_RATE;
			}
			
			cout << "Total Cost: $" <<cost<<endl;
			
		} 
		cout << "Enter ID to continue. To exit, simply enter any value/key. " <<endl;
		cin >> id; 
		if (id != "S11220401"){					//rerunning loop of program//
		active = true;
		}
		else if (id == "S11220401"){			//exiting program//
			active = false;
		}
		
	}      	       
		       
	return 0;		
}
