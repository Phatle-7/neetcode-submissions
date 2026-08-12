class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> mp;
        
        for (string& s : strs){        //"&" có thể thay đổi string&dungtruyvan
            int count[26] = {0};
            for (char c:s){
                count[c - 'a']++;
            }

            string key;
            for (int i = 0; i < 26; i++){
                key += to_string(count[i]);
                key += '!';
            }
            mp[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto [key,group] : mp){
            result.push_back(group);
        }

        return result;

        

    }
};
