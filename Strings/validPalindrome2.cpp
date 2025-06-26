class Solution {
public:
        bool isPalindrome(string s, int a, int b){
          while(a<=b){
            if(s.at(a)==s.at(b)){
                a++;
                b--;
            }
            else return false;
          }
          return true;
        }

        bool validPalindrome(string s) {
        int n = s.length();
        int i = 0;
        int j = n-1;

        while(i<=j){
            if(s.at(i)==s.at(j)){
                i++;
                j--;
            }
            else{
                return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1);
            }
        }
        
        return true;
    }
};
