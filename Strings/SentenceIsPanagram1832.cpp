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

// 2nd method in one pass

class Solution {
    public:
        bool checkIfPangram(string sentence) {
           vector<int> arr(26, 0);
           int count=0;
    
           for(char &ch: sentence){
            int index=ch - 'a';
            if(arr[index]==0){
                arr[index]++;
                count++;
            }
           } 
           return (count==26) ? true : false;
        }
    };