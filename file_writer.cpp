#include <iostream>
#include <fstream>

using namespace std;

int main (){
    ofstream datafile;

    datafile.open("data.txt");

    for (int i = 2; i<=100; i+=2){
        datafile << i << " ";   
    }

    datafile.close();
    return 0; 
}