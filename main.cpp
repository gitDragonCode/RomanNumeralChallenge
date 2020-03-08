#include <iostream>
using namespace std;


int main() {

    char userInput = 'g';
    string userRomNum;
    string userNumString;
    int userNumInt = 0;
    int numLength = 0;
    bool checkVal = false;


    cout << "Welcome to the Roman Numeral converter!" << endl;

    while (userInput != 'q') {

        cout << "MENU" << endl;
        cout << "Please select an option: " << endl;
        cout << "a - Convert a roman numeral to a number." << endl;
        cout << "b - Convert a number to a roman numeral." << endl;
        cout << "q - quit" << endl;
        cin >> userInput;

        if (userInput == 'a') { // Convert to a number.

            while (checkVal == false) {
                cout << "Please enter the roman numeral to be converted: ";
                cin >> userRomNum;
                numLength = userRomNum.length();
                checkVal = true;

                for (int i = 0; i < numLength; i++) {   // Checks if Characters are valid
                     //if (userRomNum.at(i) != 'I' || userRomNum.at(i) == 'V' || userRomNum.at(i) == 'X')
                     // FIXME

                }

                if (numLength > 10){    // Checks if the user entered a string containing more than 10 characters.
                    checkVal = false;   //    -More than 10 characters is too big for this program.
                }

            }

            // FIXME
            // Numeral to Number conversion



        }


        if (userInput == 'b') { // Convert to a roman numeral.

            while (checkVal == false) {
                cout << "Please enter the number to be converted: ";
                cin >> userNumInt;
                checkVal = true;

                if (userNumInt > 3999 || userNumInt < 1) {

                    cout << "That is not a valid number, try again.";
                    checkVal = false;
                }

            }

            userNumString = userNumInt; // Places the number in a string so as to enable working with individual digits.

            // FIXME
            // Number to Numeral conversion

        }


        if (userInput != 'a' && userInput != 'b' && userInput != 'q') { // Retry if 'a', 'b', or 'q' are not selected.
            cout << "That is not a valid option. Please try again." << endl << endl;
        }


    }

    cout << endl << "Goodbye" << endl;


    return 0;
}
