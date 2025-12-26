int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

bool isStrong(int n) {
    int sum = 0, temp = n;

    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == n;
}
