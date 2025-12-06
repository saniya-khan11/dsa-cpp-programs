class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //using kadane's algorithm
        int maxSum=INT_MIN,currSum=0;
        for(int i=0;i<=nums.size()-1;i++){
            currSum += nums[i];
            maxSum = max(maxSum,currSum);
            if(currSum<0)
                currSum=0;
        }
        return maxSum;
    }
};