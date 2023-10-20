#include <iostream>
using namespace std;

int main (){
	
	const int POS = 100;
	const int NEG = -100;
	const int SEN = 0;
	int num;
	int posi_num = 0;
	int nega_num = 0;
	
	cout << "Enter value. Once all values are entered, enter 0 to provide number of positive and negative numbers."<<endl;
	cin >> num;
	
	while (cin.fail()){
	
			cin.clear();
			string dummy;
			cin >> dummy;
			cout << "Please enter a correct numerical value." <<endl;
			cin >> num;
		
	}
	
	while (num != SEN){
		if (num > POS || num < NEG){
			cout << "Value not recognizable in range. Please input a valid value."<<endl;
			cin.clear();
		}
		else if(num < SEN ){
			nega_num++;
		}	
		else if (num > SEN ){
			posi_num++;
		}
		else{
			cout << "Enter a valid value" <<endl;
		}
		cin >> num;
	}	
	
	
	cout << "The number of positive numbers is "<<posi_num<< " and the number of negative numbers is "<<nega_num<< "."<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
