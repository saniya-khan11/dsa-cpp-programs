class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> myMap;
        myMap = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L',50},
    {'C',100},
    {'D',500},
    {'M',1000}
};
        int number =0;
       
        for(int i=0;i<s.size();i++){
            if(i<s.size()-1 && myMap[s[i]]<myMap[s[i+1]]){
                number-=myMap[s[i]];//subtraction case
            }
            else{
                number+=myMap[s[i]];//addition case
            }
        }
        return number;
    }
};