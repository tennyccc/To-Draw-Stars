#include <iostream>

using namespace std;

int main()
{
    int Number = 0, row = 0, star = 0;
    string Userchoice;

    do {

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
        cout << "Do you want to continue? \n";
        cout << "Enter 'Yes' to contine, any other keys to quit.\n";
        cin >> Userchoice;
    }  while (Userchoice == "Yes");

    return 0;
}
