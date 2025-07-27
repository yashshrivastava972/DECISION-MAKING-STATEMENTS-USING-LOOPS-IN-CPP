// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: TO IMPLEMENT THE DECISION MAKING STATEMENTS LOOPS TO CHECK PASSCODE USING WHILE LOOP (EXPERIMENT: 6D)


// CODE: 

#include <iostream>
using namespace std;

int main() {
    string password = "@YASH2025", input, newPass;
    int attempts = 0;

    while (attempts < 3) {
        cout << "ENTER THE PASSWORD: ";
        cin >> input;

        if (input == password) {
            cout << "ACCESS GRANTED!\n";

            char choice;
            cout << "DO YOU WANT TO RESET YOUR PASSWORD? (y/n): ";
            cin >> choice;

            if (choice == 'y' || choice == 'Y') {
                cout << "ENTER THE NEW PASSWORD: ";
                cin >> newPass;
                password = newPass;
                cout << "PASSWORD RESET SUCCESSFULLY.\n";
            }

            break;
            
        } else {
            attempts = attempts + 1;
            cout << "Wrong password. Attempts left: " << 3 - attempts << endl;
        }

        if (attempts == 3)
            cout << "Access denied. Maximum attempts reached.\n";
    }

    return 0;
}

// OUTPUT:

// ENTER THE PASSWORD: @YASH2025
// ACCESS GRANTED!
// DO YOU WANT TO RESET YOUR PASSWORD? (y/n): Y
// ENTER THE NEW PASSWORD: #YASH2025
// PASSWORD RESET SUCCESSFULLY.

// ENTER THE PASSWORD: @YASH2025
// ACCESS GRANTED!
// DO YOU WANT TO RESET YOUR PASSWORD? (y/n): N


// ENTER THE PASSWORD: #YASH2025
// Wrong password. Attempts left: 2
// ENTER THE PASSWORD: @yash2025
// Wrong password. Attempts left: 1
// ENTER THE PASSWORD: YASH2025
// Wrong password. Attempts left: 0
// Access denied. Maximum attempts reached.
