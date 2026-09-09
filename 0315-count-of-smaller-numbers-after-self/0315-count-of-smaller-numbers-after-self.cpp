class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        vector<int> index(n);

        for (int i = 0; i < n; i++)
            index[i] = i;

        mergeSort(nums, index, ans, 0, n - 1);

        return ans;
    }

    void mergeSort(vector<int>& nums, vector<int>& index,
                   vector<int>& ans, int low, int high) {

        if (low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergeSort(nums, index, ans, low, mid);
        mergeSort(nums, index, ans, mid + 1, high);

        merge(nums, index, ans, low, mid, high);
    }

    void merge(vector<int>& nums, vector<int>& index,
               vector<int>& ans, int low, int mid, int high) {

        vector<int> temp;
        int left = low;
        int right = mid + 1;
        int smaller = 0;

        while (left <= mid && right <= high) {

            if (nums[index[right]] < nums[index[left]]) {
                temp.push_back(index[right]);
                right++;
                smaller++;
            }
            else {
                ans[index[left]] += smaller;
                temp.push_back(index[left]);
                left++;
            }
        }

        while (left <= mid) {
            ans[index[left]] += smaller;
            temp.push_back(index[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(index[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            index[i] = temp[i - low];
        }
    }
};