class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length();
        unordered_map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        for(int i = 0; i < n + 1; i++) {
            if(mp.find(t[i]) != mp.end() && mp[t[i]] > 0) {
                mp[t[i]]--;
            } else {
                return t[i];
            }
        }

        return ' ';
    }
};
