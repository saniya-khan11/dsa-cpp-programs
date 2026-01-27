#include <iostream>
using namespace std;

// Recursive function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int main() {
    int a = 20, b = 28;
    cout << gcd(a, b); 
    return 0;
}