class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int a = target - nums[i];
            
            auto find_a = mp.find(a);

            if (find_a == mp.end()) {
                mp.insert({nums[i], i});
            } else
                return {min(i, find_a->second), max(i, find_a->second)};
        }
    }
};
