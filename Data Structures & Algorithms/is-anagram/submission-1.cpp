class Solution {
public:
    bool isAnagram(string s, string t) {
        char a[256] = {0}, b[256] = {0};
        for (int i=0; s[i]!= '\0'; i++){
            a[s[i]]++;
        }
        for (int i=0; t[i]!= '\0'; i++){
            b[t[i]]++;
        }
        for (int i = 0; i < 256; i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }
};
