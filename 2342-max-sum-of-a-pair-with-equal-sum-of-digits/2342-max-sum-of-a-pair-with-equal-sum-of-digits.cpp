class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxP = -1;
        for(int i = 0; i < nums.size(); i++) {
            int sum_0 = 0;
            int n = nums[i];

            while(n > 0) {
                int d = n % 10;
                sum_0 += d;
                n /= 10;
            }
            if(mp.find(sum_0) != mp.end()) {
                int plus = nums[i] + mp[sum_0];

                if(plus > maxP) {
                    maxP = plus;
                }
            }
            mp[sum_0] = max(mp[sum_0], nums[i]);
        }

        return maxP;
    }
};