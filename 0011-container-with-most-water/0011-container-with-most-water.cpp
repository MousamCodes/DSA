#include<algorithm> // for min max hehe
class Solution {
public:
    int area(auto i, auto j){
        return (j - i) * min(*i, *j);
    }

    int maxArea(vector<int>& height) {
        auto i = height.begin();
        auto j = height.end() - 1;
        int result = 0;

        while(i < j)
        {
            result = max(result, area(i, j));
            if(*i < *j){
                i++;
            } else {
                j--;
            }  
        }
        
        return result; 
    }
};