//Write a program to convert all vowels to capital letter in a sentence
#include <bits/stdc++.h>
using namespace std;

string conVowUpp(string& str)
{
   
    int N = str.length();

    for (int i = 0; i < N; i++) {
        if (str[i] == 'a' || str[i] == 'e'
            || str[i] == 'i' || str[i] == 'o'
            || str[i] == 'u') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return str;
}


int main()
{
    string str = "eutopia";
    cout << conVowUpp(str);
}