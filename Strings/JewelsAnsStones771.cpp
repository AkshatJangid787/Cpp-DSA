class Solution {
    public:
        int numJewelsInStones(string jewels, string stones) {
            unordered_map<char, int> mp;
            int count=0;
            
            for(char ch: stones){
                mp[ch]++;
            }
            
            for(int i = 0; i < jewels.length(); i++){
                count += mp[jewels[i]];
            }
    
            return count;
    
        }
    };