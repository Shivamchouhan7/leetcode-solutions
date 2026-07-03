class Solution {
public:
    int search(vector<int>& nums,int st,int end,int tar){
        if(st>end) return -1;
        int mid=st+(end-st)/2;
        if(nums[mid]==tar) return mid;
        else if(nums[st]<=nums[mid]){
            if(nums[st]<=tar && tar<=nums[mid]){
                return search(nums,st,mid,tar);
            }
            
            return search(nums,mid+1,end,tar);
            
        }
        else{
            if(nums[mid]<tar && tar<=nums[end]){
                return search(nums,mid+1,end,tar);
            }
            
            return search(nums,st,mid,tar);
            
        }
    }
    int search(vector<int>& nums, int target) {
        return search(nums,0,nums.size()-1,target);
    }
};