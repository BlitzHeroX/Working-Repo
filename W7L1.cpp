#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	
	int b = 2;
	int a = 1;

	
	for (int i=0; i <= 10; i++){
			
		cout << rand()%(b-a+1)+a <<endl;
		
		
	}
	
}
