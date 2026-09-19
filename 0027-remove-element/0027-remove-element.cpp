class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> r=nums;
        nums.clear();
        for(int x:r){
            if(x!=val){
                nums.push_back(x);
            }
        }
        return nums.size();
    }
};