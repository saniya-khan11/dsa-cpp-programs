#include<iostream>
#include<vector>
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long n = A.size();

    long long sumN = n * (n + 1) / 2;
    long long sumSqN = n * (n + 1) * (2 * n + 1) / 6;

    long long sum = 0, sumSq = 0;
    for (int x : A) {
        sum += x;
        sumSq += 1LL * x * x;
    }

    long long diff = sum - sumN;               // R - M
    long long sqDiff = sumSq - sumSqN;         // R² - M²

    long long sumRM = sqDiff / diff;           // R + M

    long long R = (diff + sumRM) / 2;
    long long M = sumRM - R;

    return {(int)R, (int)M};
}
