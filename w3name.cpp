#include <iostream>
using namespace std;

int main() 
{
    string fname,email;
    int num;
    
    
    cout << "Please enter your first and last name:" <<endl;
    cin >> fname;
   	cout << "Please enter your mobile number" <<endl;
   	cin >> num;
   	cout << "Please enter your email address" <<endl;
   	cin >>email;
    cout << "Dear " << fname << "." <<endl;
	cout << "Your contact information is as follows:" <<endl;
    cout << "\t Mobile Number: " << num <<endl;
    cout << "\t Email Address: " << email <<endl;
    cout <<endl;
    cout << "You are invited to my public lecture next Friday.\n";
    
    system("PAUSE");
    return 0;
}
