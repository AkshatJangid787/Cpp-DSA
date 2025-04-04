class Solution {
    public:
        bool checkIfPangram(string sentence) {
           vector<int> arr(26, 0);
    
           for(char &ch: sentence){
            int index=ch - 'a';
            arr[index]++;
           } 
           for(int &ch: arr){
            if(ch==0){
                return false;
            }
           }
    
           return true;
        }
    };