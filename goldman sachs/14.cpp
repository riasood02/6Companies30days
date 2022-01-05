class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int n = nums.size();
    if (n == 0)
        return 0;
    int ans = INT_MAX;
    vector<int> sums(n);
    sums[0] = nums[0];
    for (int i = 1; i < n; i++)
        sums[i] = sums[i - 1] + nums[i];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = sums[j] - sums[i] + nums[i];
            if (sum >= target) {
                ans = min(ans, (j - i + 1));
                break;
            }
        }
    }
    return (ans != INT_MAX) ? ans : 0;
        
    }
};
