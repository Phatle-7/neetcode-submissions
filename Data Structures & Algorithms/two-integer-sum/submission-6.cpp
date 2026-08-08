class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++) {
            a[i] = target - nums[i];
        }
        std::unordered_set<int> mp(nums.begin(), nums.end());
        if (mp.size() != n) {
            for (int i = 0; i < n; i++) {
                if (2 * nums[i] == target) {
                    for (int j = i + 1; j < n; j++) {
                        if (nums[i] == nums[j]) {
                            return {i, j};
                            break;
                        }
                    }
                    break;
                }
            }
        }
        int s1, s2;

        for (int i = 0; i < n; i++) {
            if (mp.count(a[i]) == 1 && a[i] != nums[i]) {
                s1 = i;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] == a[s1] && i != s1) {
                s2 = i;
                break;
            }
        }

        return {min(s1, s2), max(s1, s2)};
    }
};
