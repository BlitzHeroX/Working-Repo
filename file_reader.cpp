#include <iostream>
#include <fstream>

using namespace std;

double avgarr(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return (sum*1.0)/(size*1.0);
}

int main (){
    const int SIZE = 50;
    int comparison;
    int even_list[SIZE];
    int track = 0;
    int avg;

    ifstream dataFile;
    dataFile.open("data.txt");

    while(dataFile >> comparison){
        even_list[track] = comparison;
        track++;
    }
    dataFile.close();

    cout << "The values of the array are: " <<endl;

    for (int i = 0; i < track; i++){
        cout << even_list[i] << " ";
    }

    cout <<endl;

    avg = avgarr(even_list, track);
    cout << " The average of the array is " << avg << "." <<endl;
    
    return 0;
}