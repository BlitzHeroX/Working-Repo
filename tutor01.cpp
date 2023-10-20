#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>


using namespace std;

int readint()
{
    int num;          // declaration of parameter that takes input
    cin >> num;

    while(cin.fail())   // validating user input
    {
        cin.clear();    // clear cin stored variable
        string notint;  // declaration of dummy string
        cin >> notint;  // inputing into dummy string
        cout << "Input " << notint << " is not an integer. Enter an integer.";      // asking user to re-input
        cin >> num;       // taking input from user again
    }

    return num;           // returning x variable, which is an integer
}

char signchar(int num)      //takes integer as parameter
{
    if(num >= 0)        
    {
        return '+';         // returns positive sign + if positive value
    }

    else
    {
        return '-';         // returns negative sign - if negative value
    }
}

int main()
{
    const int MAXINT = 10;
    const int MININT = -10;
    int a = 0;
    int b = 0;
    int num;
    int score = 0;
    int attempt = 0;
    char reply;
    
    cout << "***********************************\n";
    cout << "*        CS111 math tutor         *\n";
    cout << "***********************************\n\n";
    cout << "Enter 'L'' to try a linear  and 'Q' to try a quadratic equation.\nAny other key to quit.";
    cin >> reply;

    

    while(reply == 'L' || reply == 'Q')
    
    {
        srand(time(0));             // setting the seed
        
        a = rand() % (MAXINT - MININT + 1) + MININT;
        b = rand() % (MAXINT - MININT + 1) + MININT;          
        
        if(reply == 'L')
        {
            cout << "\nWhat is the solution to\n";
            cout << a << " x " << signchar(a * b) << " " << fabs(a * b) << " = 0\n";
            num = readint();

            if( a * num + a * b == 0)
            {
                attempt++;
                score++;
                cout << "Great!\n\n";
            }

            else
            {
                attempt++;
                cout << "Oops!\n\n";
            }
        }

        else
        {
            cout << "\nWhat is a solution to\n";
            cout << "x^2 " << signchar(a + b) << " " << fabs(a + b) << "x " << signchar(a * b) << " " << fabs(a * b) << " = 0\n";
            num = readint();

            if( num * num + (a + b) * num + a * b == 0)
            {
                attempt++;
                score++;
                cout << "Great!\n\n";
            }

            else
            {
                attempt++;
                cout << "Oops!\n\n";
            }
        }

        cout << "Enter 'L'' to try a linear  and 'Q' to try a quadratic equation.\nAny other key to quit.";
        cin >> reply;
    }

    cout << "Your attempts are: " << attempt << endl;
    cout << "Your score is: " << score << endl;
    return 0;
}
