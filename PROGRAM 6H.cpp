// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: FLIPPED SIMPLE PYRAMID (EXPERIMENT: 6H)


// CODE: 

#include <iostream>
using namespace std;

int main() {
    int i, j, k;
    int n=5;
    
        for (i=1; i<=n; i++) {
            
                 for(k=i; k<n; k++) {
                     cout<<"  ";
            }
            
            for(j=1; j<=i; j++) {
                cout<<"* ";
            }
            
            cout<<endl;
            
        }
        
        return 0;
}


// OUTPUT:

//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
