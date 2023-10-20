#include <iostream>
#include <cmath>
using namespace std;
	
	int additionFunction (int a1, int b1)
	{
		int sum;
		sum = a1 + b1 ;
		return sum;
		
	};
	
int main(){
	
	int a,b;
	cout<<"Please enter two numbers.";
	cin>>a>>b;
	

	cout<<"The sum is "<<additionFunction(a,b);
	
	
	
	
	return 0;
}
