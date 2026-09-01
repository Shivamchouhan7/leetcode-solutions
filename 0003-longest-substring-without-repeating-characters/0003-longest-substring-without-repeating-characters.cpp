class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int length=0;
        int l=0;
        int n=s.size();
        for(int r=0;r<n;r++){
            while(st.find(s[r])!=st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            length=max(length,r-l+1);
        }
        return length;
    }
};