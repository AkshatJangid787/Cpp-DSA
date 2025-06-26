class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        int i = 0;
        int j = 0;
        string result="";

        while(i<n1 && j<n2){
            result+=word1.at(i);
            result+=word2.at(j);
            i++;
            j++;
        }
        while(i<n1){
            result+=word1.at(i);
            i++;
        }
        while(j<n2){
            result+=word2.at(j);
            j++;
        }
        return result;
    }
};
