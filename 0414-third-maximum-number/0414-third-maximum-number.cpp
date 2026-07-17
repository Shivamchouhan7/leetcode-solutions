class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> s;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            s.insert(nums[i]);
            if(s.size()==3){
                return *s.begin();
            }
        }
        return nums.back();
    }
};