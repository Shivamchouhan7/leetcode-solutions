class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int mini=INT_MAX,maxi=INT_MIN;
        int miss=1;
        for(int x:nums){
            if(x>0){
            s.insert(x);
            }
            
        }
        while(s.count(miss)){
            miss++;
        }
        
        return miss;
    }
};