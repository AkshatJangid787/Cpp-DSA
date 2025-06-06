int dp[10001][200];
class Solution {
public:
    int K;
    bool f(int i, int sum1, vector<int>& nums) {
        if (sum1 == K)
            return 1;
        if (i < 0 || sum1 > K)
            return 0;
        if (dp[sum1][i] != -1)
            return dp[sum1][i];
        bool take = f(i - 1, sum1 + nums[i], nums);
        bool skip = f(i - 1, sum1, nums);
        return dp[sum1][i] = take | skip;
    }
    bool canPartition(vector<int>& nums) {
        const int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1)
            return 0;
        K = sum / 2;
        memset(dp, -1, K * 200 * sizeof(int));
        return f(n - 1, 0, nums);
    }
};