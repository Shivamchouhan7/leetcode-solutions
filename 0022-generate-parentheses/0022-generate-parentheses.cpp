class Solution {
public:
    vector<string> validpair(int n, int l,int r,string &comb,vector<string> &str){
        if(l==n && r==n){
            str.push_back(comb);
            return str;
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
        return str;
    }
    vector<string> generateParenthesis(int n) {
        string comb="";
        vector<string> st;
        vector<string> ans;
        ans=validpair(n,0,0,comb,st);
        return ans;
    }
};