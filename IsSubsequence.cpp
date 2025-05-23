class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true;
        for(int i = 0, j = 0; i < t.size(); ++i){
            if(t[i] == s[j]){
                ++j;
                if(j == s.size()) return true;
            }
        }
        return false;
    }
};
