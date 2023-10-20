#include <iostream>

using namespace std;

int main (){
	
	int speed;
	char drunk;
	const int T1_SPEED = 60;
	const int T2_SPEED = 65;
	const int T3_SPEED = 70;
	const int SIXTY_SPEED = 60;
	const int SEVENTY_SPEED = 70;
	const int OVER_SEVENTY = 10;
	const int FIVE_FINE = 5;
	const int SEVEN_FINE = 7;
	const int FIFTEEN_FINE = 15;
	
	int fine_speed;
	
	cout <<"---------------------------------------"<<endl;
	cout <<"*    Traffic Infringement Issuance    *"<<endl;
	cout <<"---------------------------------------"<<endl;
	
	cout << "Please enter the speed of the vehicle (in km/hr) that has offended." <<endl;
	cin >> speed;
	
	while (cin.fail()){
	if (cin.fail() || speed <= 60){
		cin.clear();
		string dummy;
		cin >> dummy;
		cout << "Please enter a numerical value for the speed of the offending vehicle." <<endl;
		cin >> speed;
	}
	}
	
	cout << "Is the driver of the vehicle drunk? Please enter \"y\" if yes and \"n\" if no."<<endl;
	cin >> drunk;
	
	if (drunk == 'n'){
		if (speed > T1_SPEED && speed < T2_SPEED){
			cout << "Issue Warning to driver."<<endl;
		}
		else if (speed ==T2_SPEED && speed <= T3_SPEED){
			fine_speed = (speed - SIXTY_SPEED) * SEVEN_FINE;
			
			cout << "Issue Fine of $" <<fine_speed<< " to driver."<<endl;
		}
		else if (speed > T3_SPEED){
			fine_speed = (speed - SEVENTY_SPEED) * FIVE_FINE;
			
			cout << "Issue fine of $" <<fine_speed<< " and Inform Driver to spend the day/night at the station."<<endl;
		}
		else if (speed <= T1_SPEED){
		
		cout << "Driver is free to go." <<endl;
	}
	}
	else if (drunk == 'y'){
		if (speed > T1_SPEED && speed < T2_SPEED){
			cout << "Issue Warning and Inform driver to take a shower."<<endl;
		}
		else if (speed == T2_SPEED && speed <= T3_SPEED){
			fine_speed = (speed - SIXTY_SPEED) * SEVEN_FINE;
			
			cout << "Issue Fine of $" <<fine_speed<< " and Inform driver to take a shower."<<endl;
		}
		else if (speed > T3_SPEED){
			fine_speed = (((OVER_SEVENTY) * SEVEN_FINE) + ((speed - SEVENTY_SPEED) * FIFTEEN_FINE));
			
			cout << "Issue fine of $" <<fine_speed<< " and Inform Driver to spend the day/night at the station."<<endl;
		}
		else if (speed <= T1_SPEED){
		
		cout << "Driver should wait." <<endl;
	}
	
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("PAUSE");
	
	return 0;
}
