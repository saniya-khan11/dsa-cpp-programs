/*
0 
1  0  1 
2 1  0  1  2 
print it .. 
*/
#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows

    for (int i = 0; i < n; i++) {

        // Print decreasing part
        for (int j = i; j >= 0; j--) {
            cout << j << " ";
        }

        // Print increasing part
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
