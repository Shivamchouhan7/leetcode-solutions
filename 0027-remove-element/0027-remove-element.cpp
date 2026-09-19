class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        erase(nums,val);
        return nums.size();
    }
};