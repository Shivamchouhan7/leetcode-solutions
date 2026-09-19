class Solution {
public:
    int se(vector<int>& nums, int target,int s,int end){
        if(s>end) return -1;
        int mid=s+(end-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[s]<=nums[mid]){
            if(target>=nums[s] && target<nums[mid]){
                return se(nums,target,s,mid-1);

            }
            else{
                return se(nums,target,mid+1,end);
            }
        }
        else{
            if(nums[mid]<target && target<=nums[end]){
                return se(nums,target,mid+1,end);
            }
            else{
                return se(nums,target,s,mid-1);
            }

        }
    }
    int search(vector<int>& nums, int target) {

        return se(nums,target,0,nums.size()-1);

    }
};