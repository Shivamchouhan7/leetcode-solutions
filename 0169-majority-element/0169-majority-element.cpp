class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int x:nums){
            m[x]++;
        }
        int maxf=0;
        int v=0;
        for(auto x:m){
            if(maxf<x.second) {
                maxf=x.second;
                v=x.first;
            }

        }
        return v;
    }
};