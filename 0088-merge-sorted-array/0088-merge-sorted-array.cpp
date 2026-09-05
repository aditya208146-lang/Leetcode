class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<nums2.size();i++){
                nums1.pop_back();
        }
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        
        for( int i=0;i<=nums1.size()-1;i++){
            int j=i;
            while(j>0 && nums1[j-1] > nums1[j]){
                int temp = nums1[j-1];
                nums1[j-1] = nums1[j];
                nums1[j] = temp;
                j--;
            }
            
        }
        
    }
};