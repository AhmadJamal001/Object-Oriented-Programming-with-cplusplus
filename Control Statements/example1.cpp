/*If integer variable currentNumber is odd, change its value so that it is now 3
times currentNumber plus 1, otherwise change its value so that it is now half of
currentNumber (rounded down when currentNumber is odd).*/

#include <iostream>
using namespace std;

int main()
{
    int currentNumber;

    cout << "Enter value for currentNumber " << endl;
    cin >> currentNumber ;

    if (currentNumber % 2 != 0) {
        currentNumber = currentNumber * 3 + 1;
        cout << currentNumber << endl;
    } else {
        currentNumber = currentNumber / 2;
        cout << currentNumber << endl;
    }

    return 0;
}