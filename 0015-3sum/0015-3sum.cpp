class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int i = 0;
        int sum =0;
        int j;
        int k;
        int n = nums.size();
        for(i = 0; i<n; i++){
            j = i+1;
            k = n - 1;
            if(i>0 && nums[i] == nums[i-1])
            continue;
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k] == nums[k+1]){
                        k--;
                    }
                }else if(sum > 0){
                        k--;
                        }else{
                        j++;
                        }
            }
        }
        return ans;
    }
};