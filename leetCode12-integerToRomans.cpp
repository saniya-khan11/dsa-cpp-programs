class Solution {
public:
    string intToRoman(int num) {
        static const int vals[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
static const string syms[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};


        string result;
int n = sizeof(vals) / sizeof(vals[0]);
        for (int i=0;i<n;i++) {
            while (num >= vals[i]) {
                result += syms[i];
                num -= vals[i];
            }
        }
        return result;
    }
};
