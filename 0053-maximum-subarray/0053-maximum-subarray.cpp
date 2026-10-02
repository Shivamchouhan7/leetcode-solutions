class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int i=0;
        int csum=0;
        int msum=INT_MIN;
        while(i<nums.size()){
            csum+=nums[i];
            msum=max(msum,csum);
            if(csum<0) csum=0;
            i++;
        }
        return msum;
    }
};