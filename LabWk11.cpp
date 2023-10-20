#include <iostream>

using namespace std;

void doubler(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{

    // Part 1
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;
    int num6 = 6;
    int num7 = 7;
    int num8 = 8;
    int num9 = 9;
    int num10 = 10;

    const int MAXSIZE = 10;

        int set[MAXSIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Part 2

    int sum = 0;

    for (int i = 0; i < MAXSIZE; i++)
    {

        sum = sum + set[i];
    }

    cout << "The sum is " << sum << "." << endl;

    int product = 1;

    for (int i = 0; i < MAXSIZE; i++)
    {

        product = product * set[i];
    }

    cout << "The product is " << product << "." << endl;

    int average = 0;

    average = sum / MAXSIZE;

    cout << "The average is "<< average << "."<<endl;
    cout << endl;
    cout << endl;

    // Part 3

    int sizeing = 0;
    const int MAXIMUMSIZE = 100;
    int app[sizeing];
    int entry;
    
    cout << "Please Enter Your Array Values. Enter any key to display the array." <<endl;

    while (cin >> entry)
    {
        if (sizeing < MAXIMUMSIZE)
        {
            app[sizeing] = entry;
            sizeing++;
        }
    }

    doubler(app, sizeing);

    cout << "The array is: " <<endl;

    for (int i = 0; i < sizeing; i++)
    {

        cout << app[i] << " | ";

        
    }
    cout << endl;
    cout << endl;

    system("PAUSE");
    return 0;
}