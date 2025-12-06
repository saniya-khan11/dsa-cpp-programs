class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numStore;
        
        // Single Pass: Iterate and check/insert simultaneously
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the required complement is ALREADY in the map.
            // If it is, we found the pair!
            if (numStore.count(complement)) {
                return {numStore[complement], i};
            }
            
            // If not found, add the current number and its index to the map
            // for future checks
            numStore[nums[i]] = i;
        }
        
        
        return {};
    }
};