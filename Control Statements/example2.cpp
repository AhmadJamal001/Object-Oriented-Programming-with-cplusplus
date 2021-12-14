/*If integer variable opCode has the value 1, read in double values for X and Y and
calculate and print their sum.*/

#include <iostream>
using namespace std;

int main()
{
    int opCode;

    cout << "Enter value for opCode: ";
    cin >> opCode ;

    if (opCode == 1){

        double X,Y,sum;

        cout << "Enter value for X: " << endl;
        cin >> X ;
        cout << "Enter value for Y: " << endl;
        cin >> Y ;

        sum = X + Y ;

        cout << sum << endl;
    }
return 0;
}
