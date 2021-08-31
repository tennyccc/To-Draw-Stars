// Draw Stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int Number = 0, row = 0, star = 0;
 
    cout << "How many rows do you want to draw?" << endl;
    cin >> Number;
    while (!cin) {
            cout << "Invalid Input. Please enter a valid integer to draw stars: ";
            cin.clear();
            cin.ignore();
            cin >> Number;
    }

    for (row = 0; row <= Number; row++) {
        for (star = 0; star < row; star++) {

                cout << "*";
        }

            cout << "\n";

    }

              
 return 0;
}
