class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() == t.size()){
            std::unordered_map<char, int> map;
            for (char c : s) map[c]++;
            for (char c : t) map[c]--;
            for (char c : s){
                if (map[c] != 0) return false;
            }
            return true;
        }
        return false;
    }
};
