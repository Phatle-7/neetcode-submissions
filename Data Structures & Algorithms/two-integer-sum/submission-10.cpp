class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> numid;

        for (int i = 0; i < n; i++) {
            numid.push_back({nums[i], i});
        }

        sort(numid.begin(), numid.end());
        int l = 0, r = n - 1;
        while (l < r) {
            if (numid[l].first + numid[r].first < target) l++;

            else if (numid[l].first + numid[r].first > target)
                r--;

            else {
                return {min(numid[l].second, numid[r].second),
                        max(numid[l].second, numid[r].second)};
            }
        }
    }
};
