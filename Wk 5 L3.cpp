#include <iostream>

using namespace std;

int main (){
	
	int attempt;
	string password;
	
	cout << "Enter your password."<<endl;
	cin >> password;
	
	for (attempt = 5; attempt <= 0; attempt--){
		if (password != "Test1c13s"){
			if (attempt > 0){
				cout <<"Please enter the correct password."<<endl;
				cout <<"Remaining attempts: "<<attempt<<endl;
				cin >> password;
			}
			else if (attempt = 0)
				cout << "No more attempts available."<<endl;
				
				return 1;
		}	
		else if (password == "Test1c13s"){
			cout << "Welcome user."<<endl;
			break;
		}
		
		}
			
		
	
	
	
	
	
	
	
	
	
	
	return 0;
}
