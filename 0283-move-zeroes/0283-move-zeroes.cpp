class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        int non_zero=0;
        int n=nums.size();
        while(non_zero<n){
            if(nums[non_zero]!=0 && nums[zero]==0){
                int temp=nums[non_zero];
                nums[non_zero] = nums[zero];
                nums[zero] = temp;
                zero++;
            }
            if(nums[zero]!=0)
            zero++;
            if(nums[non_zero]==0 || non_zero <= zero)
            non_zero++;
        }
    }
};