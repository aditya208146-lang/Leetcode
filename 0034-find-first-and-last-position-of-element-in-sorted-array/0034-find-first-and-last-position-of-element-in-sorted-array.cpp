class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int first_appear = -1;
        int last_appear = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]<target){
                low = mid+1;
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                first_appear = mid;
                high = mid - 1;
            }
        }
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]<target){
                l = mid+1;
            }else if(nums[mid]>target){
                r = mid-1;
            }else{
                last_appear = mid;
                l = mid + 1;
            }
        }
        return{first_appear, last_appear};
    }
};