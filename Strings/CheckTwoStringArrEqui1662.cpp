class Solution {
    public:
        bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
            string s1 = "";
            string s2 = "";
    
            for(auto &st: word1){
                s1+=st;
            }
    
            for(auto &sta : word2){
                s2+=sta;
            }
    
            if(s1==s2){
                return true;
            }
            return false;
        }
    };