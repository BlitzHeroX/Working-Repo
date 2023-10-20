#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int x,y,z;
		
	cout << "Enter the first number" <<endl;
	cin >> x;
	cout << "Enter the second number" <<endl;
	cin >> y;
	
	z = x * y * (y + x);
	
	cout << "The z value calculated is " << z <<endl;
	
	system ("PAUSE");
	
	return 0;
	
	
}
