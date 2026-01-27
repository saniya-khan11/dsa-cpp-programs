#include <iostream>
#include <sstream>
#include <set>
using namespace std;

string toLower(string s) {
    for (char &c : s)
        c = tolower(c);
    return s;
}

int main() {
    set<string> wordSet = {"is", "of", "on", "the"};

    cout << "Enter your string: ";
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word;

    int countEven = 0;
    int countOdd = 0;
    int countSetWord = 0;

    while (ss >> word) {
        string lowerWord = toLower(word);

        if (lowerWord.size() % 2 == 0)
            countEven++;
        else
            countOdd++;

        if (wordSet.find(lowerWord) != wordSet.end())
            countSetWord++;
    }

    cout << "Even words : " << countEven << endl;
    cout << "Odd words  : " << countOdd << endl;
    cout << "Set words  : " << countSetWord << endl;

    return 0;
}
