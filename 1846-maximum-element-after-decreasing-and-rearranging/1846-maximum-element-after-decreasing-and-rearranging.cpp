class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        if(arr.size()==1) return 1;
        sort(arr.begin(),arr.end());
        arr[0]=1;
        int maxi=INT_MIN;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]+1){
                arr[i]=arr[i-1]+1;
            }
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
};