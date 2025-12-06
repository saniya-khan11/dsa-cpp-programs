class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if (password.length() <8) return false;
        string specialChar ="!@#$%^&*()-+";
        bool countS=0 ,countL=0,countU=0,countN=0;
        for (int i=0;i<password.size();i++){
            if(i<password.size()-1 && (password[i]==password[i+1])) return false;
            if (specialChar.find(password[i]) != std::string::npos) countS =true;
            if(password[i]>=65 && password[i]<=90) countU = true;
            if(password[i]>=97 && password[i]<=122) countL = true ;
            if(password[i]>=48 && password[i]<=57) countN =true;
           
        }
         if (countS == 1 && countU ==1 && countL == 1 && countN == 1) return true;
        return false;
    }
};