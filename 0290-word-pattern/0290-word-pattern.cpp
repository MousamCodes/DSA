class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words((istream_iterator<string>(ss)), istream_iterator<string>());
        if(pattern.size()!=words.size())
        return false;
        unordered_map<char,string> c2w;
        unordered_map<string,char> w2c;
        //mapping loop
        for (int i=0; i<pattern.size();i++){
        char c=pattern[i];
        string w=words[i];

        if(c2w.count(c)&&c2w[c]!=w)
        return false;
        if(w2c.count(w)&&w2c[w]!=c)
        return false;
        c2w[c]=w;
        w2c[w]=c;
        }return true;
    } 
};