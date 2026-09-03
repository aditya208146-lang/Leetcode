class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(m.count(nums[i])>0)
            {
                ans.push_back(m[nums[i]]);
                ans.push_back(i);
                break;
            }
            m[target-nums[i]] = i;
        }
        return ans;
    }
    
};