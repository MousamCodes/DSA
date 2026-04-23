class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> wnd;
        long long currSum = 0;
        long long maxSum = 0;
        int start = 0;

        for (int end = 0; end < nums.size(); end++) {
            // 1. If we see a duplicate, shrink from the left until it's gone
            while (wnd.count(nums[end])) {
                currSum -= nums[start];
                wnd.erase(nums[start]);
                start++;
            }

            // 2. Add the current number now that the window is distinct
            wnd.insert(nums[end]);
            currSum += nums[end];

            // 3. If window is too big, shrink it to maintain size K
            if (end - start + 1 > k) {
                currSum -= nums[start];
                wnd.erase(nums[start]);
                start++;
            }

            // 4. If we hit exactly size K, check if it's our new maximum
            if (end - start + 1 == k) {
                maxSum = max(maxSum, currSum);
            }
        }
        return maxSum; // Return at the very end
    }
};