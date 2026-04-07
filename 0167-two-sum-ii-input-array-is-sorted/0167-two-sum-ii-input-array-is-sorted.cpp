class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         auto at= numbers.begin(); auto it= numbers.end()-1; 

        while (at<it){
            int sum=*it + *at;
            if(sum == target){
                int index1= (at-numbers.begin())+1;
                int index2= (it-numbers.begin())+1;
                return {index1, index2};
            }
            else if (sum<target)
            at++;
            else
            it--;
        }
        return {};
           
    }
};