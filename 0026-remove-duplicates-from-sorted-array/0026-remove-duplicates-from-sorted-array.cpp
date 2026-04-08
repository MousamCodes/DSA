class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto i=nums.begin(); auto j=nums.begin()+1;
       while (j!=nums.end()){
        if(*i==*j){
            j++;
        }else {
        i++;
        *i=*j;
        j++;
        }
       }
       return (i-nums.begin()+1);
       for (int x: nums){
        cout<<x<<" ";
       }
       
       }
    
};