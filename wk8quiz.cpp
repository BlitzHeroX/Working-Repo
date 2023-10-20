#include <iostream>
using namespace std;
int rankfun(double left, double right){
int rank;
    if(left < right){
    rank = -1;
    }
    else if(left > right){
    rank = 1;
    }
    else{
    rank = 0;
    }
    return rank;
    }
int main(){
    double number1 = 1.7;
    double number2 = 2.3;
    int result;
    result = rankfun(number1,number2); 
    cout << "The 1st result is:" << result << endl;
    result = 2+rankfun(number2,number1); 
    cout << "The 2nd result is:" << result << endl;
    result = 3*rankfun(number1,number1); 
    cout << "The 3rd result is:" << result << endl;
    result = rankfun(number1+1,number2); 
    cout << "The 4th result is:" << result << endl;
    result = rankfun(number1,5.3); 
    cout << "The 5th result is:" << result << endl;
    cout << "The 6th result is:" << rankfun(7.2,2.8) << endl;
 
    return 0;
}
