class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> intSet ;
        for(int element :nums){
            if(intSet.contains(element))
                return true;
            intSet.insert(element);
        }
        return false;
        }
        
};