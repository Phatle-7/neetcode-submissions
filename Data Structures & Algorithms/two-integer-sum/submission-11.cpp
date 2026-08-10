class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int a = target - nums[i];
            if (mp.count(a) == 0) {
                mp.insert({nums[i], i});
            } else
                return {min(i, mp.find(a)->second), max(i, mp.find(a)->second)};
        }
    }
};
