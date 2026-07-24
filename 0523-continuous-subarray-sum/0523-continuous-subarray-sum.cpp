class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> remainderMap;
        
        // Base case: A remainder of 0 at index -1 
        // Handles cases where a valid subarray starts right from index 0
        remainderMap[0] = -1;
        
        int runningSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            runningSum += nums[i];
            
            // Calculate the remainder
            int remainder = runningSum % k;
            
            // Check if we have seen this remainder before
            if (remainderMap.find(remainder) != remainderMap.end()) {
                // Check if the subarray length is at least 2
                if (i - remainderMap[remainder] >= 2) {
                    return true;
                }
            } else {
                // Store the index of the FIRST occurrence of this remainder
                remainderMap[remainder] = i;
            }
        }
        
        return false;
    }

};