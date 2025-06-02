#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto x : mp){
            int ele = x.second;
            if(st.find(ele)!=st.end()){
                return false;
            }
            else st.insert(ele);
        }
        
        return true;
        
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    if(sol.uniqueOccurrences(arr)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}