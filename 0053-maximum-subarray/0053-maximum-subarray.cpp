class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int cursum = nums[0];
        int maxsum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            cursum+=nums[i];
            if(cursum < nums[i]){
                cursum = nums[i];
            }
            if(maxsum < cursum){
                maxsum = cursum;
            }
        }
        return maxsum;
    }
    
};