class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int result = 0;

        while (i < j) {
            // Calculate area directly to save function call time
            int h = (height[i] < height[j]) ? height[i] : height[j];
            int current_area = (j - i) * h;
            
            if (current_area > result) result = current_area;

            // Move the shorter pointer
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return result;
    }
};