class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=nums.size();
        int cnt=l;
        vector<int> rnd;
        rnd.push_back(nums[0]);
        for(int i=1; i<l; i++)
        {
            if(nums[i]==nums[i-1])
            {
                cnt=cnt-1;
            }
            else{
                rnd.push_back(nums[i]);
            }
        }
        nums=rnd;
        return cnt;
    }
};