class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        vector<string> original = strs;

        for (int i = 0; i < n; i++) {
            sort(strs[i].begin(), strs[i].end());
        }
        std::unordered_map<string, int> mp;
        std::unordered_map<int, int> decode;
        int grs = 1;

        mp.insert({strs[0], 1});
        decode.insert({0, 1});

        for (int i = 1; i < n; i++) {
            auto find = mp.find(strs[i]);
            if (find == mp.end()) {
                grs++;
                mp.insert({strs[i], grs});
                decode.insert({i, grs});
            } else
                decode.insert({i, find->second});
        }

        vector<vector<string>> result(grs);

        for (int i = 0; i < n; i++) {
            result[decode[i] - 1].push_back(original[i]);
        }

        return result;
    }
};
