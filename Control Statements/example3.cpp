/*Assign a value to a double variable cost depending on value of integer variable
distance as follows:

distance                                :   cost

0 through 100                           :   4.00
more than 100 but less than 500         :   8.00
more than 500 but less than 1000        :   10.00
1000 or more                            :   12.00*/

#include <iostream>
using namespace std;

int main()
{
    int distance;
    double cost;

    cout << "Enter value for distance: " << endl;
    cin >> distance ;

    if (distance >= 0 & distance <= 100 ){

        cost = 4.00;
        cout << "Cost is: " << cost << endl;
    }else if (distance >= 100 & distance <= 500){

        cost = 8.00;
        cout << "Cost is: " << cost << endl;
    }else if (distance >= 500 & distance <= 1000){

        cost = 10.00;
        cout << "Cost is: " << cost << endl;
    }else if (distance > 1000){

        cost = 12.00;
        cout << "Cost is: " << cost << endl;
    }
    

    return 0;
}