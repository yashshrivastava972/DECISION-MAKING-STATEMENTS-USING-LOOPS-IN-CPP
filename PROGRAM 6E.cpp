// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: TO REVERSE THE LAST 5 DIGITS OF PRN (EXPERIMENT: 6E)


// CODE: 

#include <iostream>
using namespace std;

int main() {
    long long prn;
    cout << "ENTER YOUR PRN NUMBER:";
    cin >> prn;

    // Extract last 5 digits
    int lastFive = prn % 100000;

    // Reverse those 5 digits
    int reversed = 0;
    while (lastFive > 0) {
        int digit = lastFive % 10;
        reversed = reversed * 10 + digit;
        lastFive = lastFive / 10;
    }

    // Get the first part of PRN (excluding last 5 digits)
    long long firstPart = prn / 100000;

    // Combine the first part and the reversed last 5 digits
    long long newPRN = firstPart * 100000 + reversed;

    cout << "PRN WITH THE LAST FIVE DIGITS REVERSED:" << newPRN << endl;

    return 0;
}

// OUTPUT:

// ENTER YOUR PRN NUMBER:24070123137
// PRN WITH THE LAST FIVE DIGITS REVERSED:24070173132
