class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort (strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        string res="";
        int minlen=min(first.size(),last.size());
        for(int i=0;i<minlen;i++){
            if(first[i]!=last[i]) break;
            res+=first[i];
        }
        return res;
    }
};