#include <iostream>
using namespace std;

int main (){
	
	// Part 1a.) //
	
	int sum1;
	for (int i = 0 ; i <= 1000; i+=7 ){
	
		sum1 = sum1 + i;
	
	}
		cout << "a.) The sum is " <<sum1<<endl;
	
	// Part 1b.) //
	
	int sum2 = 0;
	
	int j = 0;
	
	while (j <= 1000){
		
		sum2 += j;
		j = j + 7;
		
	}
	cout << "b.) The Sum is "<<sum2<< endl;
	
	// Part 1c //
	
	int sum3 = 0;
	for (int i = 0; i <= 1000; i++){
		
		if (i % 7 == 0){
			
			sum3 += i;	
		}
	}
	cout << "c.) The sum is " << sum3 <<endl;
	
	
	
	return 0;	
}
