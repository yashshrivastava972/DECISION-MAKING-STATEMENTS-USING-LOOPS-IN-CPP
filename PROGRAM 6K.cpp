// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: HOURGLASS PATTERN (EXPERIMENT: 6K)


// CODE: 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER THE NUMBER OF ROWS (FOR TOP HALF TRIANGLE): ";
    cin >> n;

    // FOR TOP HALF TRIANGLE
    for (int i = 0; i < n; i++) {
        // TO PRINT SPACES
        for (int j = 0; j < i; j++)
            cout << " ";
        // TO PRINT STARS
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            cout << "*";
        cout << endl;
    }

    // FOR BOTTOM HALF TRIANGLE
    for (int i = 1; i <= n; i++) {
        // TO PRINT SPACES
        for (int j = 0; j < n - i; j++)
            cout << " ";
        // TO PRINT STARS
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}

// OUTPUT:

// ENTER THE NUMBER OF ROWS (FOR TOP HALF TRIANGLE): 5
// *********
// *******
//   *****
//    ***
//     *
//     *
//    ***
//   *****
//  *******
// *********
