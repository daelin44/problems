class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = -2147483648;
        for(int i = 0; i < nums.size(); i++)
        {   
            sum = (sum>=0) ? sum + nums[i] : nums[i];
            maxSum = (sum < maxSum) ? maxSum : sum;
        }
        return maxSum;
    }
};