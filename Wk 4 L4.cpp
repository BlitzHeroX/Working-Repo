#include <iostream>

using namespace std;

int main (){
	
	char gender;
	int age;
	
	cout << "Are you woman?" << endl;
	cout << "Enter Y/y for yes and N/n for No." <<endl;
	cin >> gender;
	
	if (gender == 'Y' || gender == 'y'){
		
		cout << "Sup girl. What's your age?" <<endl;
		cin >> age;
		if (age >= 17) {
			
			cout << "Yo. You too old." <<endl;
		}
		else {
			
			cout << "Hello girl. Wanna bang?" <<endl;
		}
		
	}	
	else if (gender == 'N' || gender == 'n'){
		
		cout << "Hello bro. Want some head?" <<endl;
		
		
		
	}	
	else {
		
		cout << "Put the right character in dumbass." <<endl;
	}
	 
	 system ("PAUSE");
	
	
	
	return 0;
}
