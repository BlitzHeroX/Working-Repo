#include <iostream>
using namespace std;

int main(){
	
	string Name;
	int age;
	cout<<"Please Enter Name and Age by spacing both responses respectively."<<endl;
	cin>>Name>>age;
	cout<<endl;
	cout<<"Hello "<<Name<< "\!"<<endl;
	cout<<endl;
	cout<<"Welcome to the Programmers' Cafe."<<endl;
	cout<<"A Menu suited to your age of "<<age<<" has been provided."<<endl;
	cout<<"Enjoy your Menu\!"<<endl;
	
	cout<<" ____________________________________________________________________________"<<endl;
	cout<<"|                                                                            |"<<endl;
	cout<<"|                         Programmers' Cafe Menu                             |"<<endl;
	cout<<"|                                                                            |"<<endl;
	cout<<"|____________________________________________________________________________|"<<endl;
	cout<<"| Beverage             | Regular        | Large          | Extra Large       |"<<endl;
	cout<<"|______________________|________________|________________|___________________|"<<endl;
	cout<<"| Long Black           | $3.50          | $3.70          | $4.00             |"<<endl;
	cout<<"|______________________|________________|________________|___________________|"<<endl;
	cout<<"| Flat White           | $3.80          | $4.20          | $4.50             |"<<endl;
	cout<<"|______________________|________________|________________|___________________|"<<endl;
	cout<<"| Cappuccino           | $4.00          | $4.30          | $5.00             |"<<endl;
	cout<<"|______________________|________________|________________|___________________|"<<endl;
	cout<<"| Tea                  | $3.00          | $3.20          | $3.50             |"<<endl;
	cout<<"|______________________|________________|________________|___________________|"<<endl;
	
	system("pause");
	return 0;
}

