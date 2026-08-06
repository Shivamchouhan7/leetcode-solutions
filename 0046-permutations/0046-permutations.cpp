class Solution {
public:
void permutation(int start, std::vector<int>& nums, std::vector<std::vector<int>>& result) {
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = start; i < nums.size(); ++i) {
            std::swap(nums[start], nums[i]);
            permutation(start + 1, nums, result);
            std::swap(nums[start], nums[i]); 
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<std::vector<int>> result;
        permutation(0, nums, result);
        return result;
    }
};