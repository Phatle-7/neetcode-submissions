class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        vector<string> original = strs;
        vector<vector<string>> result;

        for (int i = 0; i < n; i++) {
            sort(strs[i].begin(), strs[i].end());
        }
        std::unordered_map<string, int> mp;
        int grs = 1;

        mp.insert({strs[0], 1});
        result.push_back({original[0]});

        for (int i = 1; i < n; i++) {
            auto find = mp.find(strs[i]);
            if (find == mp.end()) {
                grs++;
                mp.insert({strs[i], grs});
                result.push_back({original[i]});
            } else
                result[(find->second) - 1].push_back(original[i]);
        }
        return result;
    }
};
