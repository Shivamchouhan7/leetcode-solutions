class Solution {
public:
    void validpair(int n, int l,int r,string &comb,vector<string> &str){
        if(l==n && r==n){
            str.push_back(comb);
            return ;
        }
        if(l<n){
            comb+='(';
            validpair(n,l+1,r,comb,str);
            comb.pop_back();
        }
        if(r<l){
            comb+=')';
            validpair(n,l,r+1,comb,str);
            comb.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string comb="";
        vector<string> ans;
        validpair(n,0,0,comb,ans);
        return ans;
    }
};