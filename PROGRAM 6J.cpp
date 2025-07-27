// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: CONTINUOUS ALPHABET PYRAMID (EXPERIMENT: 6J)


// CODE: 

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    char ch = 'A';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;

            //WRAP AROUND IF EXCEEDS 'Z'
            if (ch > 'Z') {
                ch = 'A';
            }
        }
        cout << endl;
    }

    return 0;
}


// OUTPUT:

// Enter number of rows: 5
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
