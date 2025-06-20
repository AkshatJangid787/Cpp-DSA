class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // write code here
        int n = arr.size();
        stack<int> st;
        vector<int> pgi;
        pgi.push_back(-1);
        st.push(0);
        for(int i=1; i<=n-1; i++){
            while(st.size()>0 && arr[st.top()]<=arr[i]){
                st.pop();
            }
            
            if(st.size()==0) pgi.push_back(-1);
            else pgi.push_back(st.top());
            
            st.push(i);
        }
        for(int i=0; i<n; i++){
            pgi[i] = i - pgi[i];
        }
        
        return pgi;
    }
};
