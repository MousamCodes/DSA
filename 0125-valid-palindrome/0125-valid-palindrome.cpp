class Solution {
public:
    bool isPalindrome(string s) {
       auto i = s.begin(); auto j= s.end()-1;
       while(i<j){
        if(!isalnum(*i)){
            i++;
            continue;
        }else if (!isalnum(*j)){
            j--;
            continue;
        }
        
        if(tolower(*i)==tolower(*j)){
            
            i++;
            j--;
          
        }else{
        return false;
        }
       }
        return true;
       }
        
    
};