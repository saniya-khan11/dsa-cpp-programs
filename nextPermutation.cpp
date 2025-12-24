class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s= nums.size();
        int pivot =-1;
        //1. Identify the pivot
        for(int i= s-2;i>=0;i--){
            if(nums[i]<nums[i+1]) {
                pivot = i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        //2. swap the element with the next larger element from its backside
        for(int i=s-1;i>pivot;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }

        }
        //3. reverse the number after pivot index
        int i=pivot+1, j=s-1;
        while(i<=j){
            swap(nums[i++],nums[j--]);
        }
    }
};