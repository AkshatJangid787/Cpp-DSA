// Sum of All Subset XOR Totals

// find OR of all 
// then store (n-1) '0' in right side

class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
            int n=nums.size();
            int result=0;
    
            for(int &num :  nums) {
                result |= num;
            } 
    
            return result << (n-1);
        }
    };