class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0; i<=nums.size()-1; i++){
            int j = i;
            while(j > 0 && nums[j-1]==0){
                int temp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = temp;
                j--;
            }
            
        }

    }
};