#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> cnt{{0, 1}};
        int ans = 0, currSum = 0;

        for (int x : nums) {
            currSum += x;
            ans += cnt[currSum - k]; 
            cnt[currSum]++;
        }
        return ans;
    }
};