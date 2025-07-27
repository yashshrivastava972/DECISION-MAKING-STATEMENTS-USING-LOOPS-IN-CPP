// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: NESTED FOR LOOPS (EXPERIMENT: 6F)


// CODE: 

#include <iostream>
using namespace std;

int main() {
    // OUTER LOOP
    for(int i=1;i<=2;++i) {
        cout<<"Outer:"<<i<<"\n";
        // INNER LOOP
        for(int j=1;j<=3;++j) {
        cout<<"Inner:"<<j<<"\n";
        }
    }
    return 0;
}

// OUTPUT:

// Outer:1
// Inner:1
// Inner:2
// Inner:3
// Outer:2
// Inner:1
// Inner:2
// Inner:3
