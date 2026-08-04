class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++){
            for (int j = 0; j < i; j++){
                if (nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};