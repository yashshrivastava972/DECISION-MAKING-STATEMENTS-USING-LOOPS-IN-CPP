// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: FLOYD'S SERIES (EXPERIMENT: 6I)


// CODE: 

#include <iostream>
using namespace std;

int main() {
    int rows, num = 1;

    cout << "ENTER THE NUMBER OF ROWS: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
} 

// OUTPUT:

// ENTER THE NUMBER OF ROWS: 5
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
