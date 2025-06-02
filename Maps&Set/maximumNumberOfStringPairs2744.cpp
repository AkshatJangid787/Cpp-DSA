#include<iostream>
#include<unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        unordered_set<string> s;
        for(int i=0; i<n; i++){
            s.insert(words[i]);
        }
        for(int i=0; i<n; i++){
            string rev = words[i];
            reverse(rev.begin(), rev.end());
            if(words[i] == rev) continue;
            if(s.find(rev)!=s.end()){
                count++;
                s.erase(words[i]);
            }
        }
        return count;
    }
};

int main(){
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> words(n);
    cout << "Enter " << n << " strings:\n";
    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }

    Solution sol;
    int result = sol.maximumNumberOfStringPairs(words);
    cout << "Maximum number of string pairs: " << result << endl;

    return 0;
}