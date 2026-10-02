class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prevp(nums.size());
        vector<int> nextp(nums.size());
        int p=1;
        for(int i=0;i<nums.size();i++){
            prevp[i]=p;
            p*=nums[i];
        }
        int n=1;
        for(int i=nums.size()-1;i>=0;i--){
            nextp[i]=n;
            n*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=prevp[i]*nextp[i];
        }
        return nums;
    }
};