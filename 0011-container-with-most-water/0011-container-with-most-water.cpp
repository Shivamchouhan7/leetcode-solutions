class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int maxstore=INT_MIN;
        while(i<j){
            int currstore=(j-i)*(min(height[i],height[j]));
            maxstore=max(currstore,maxstore);
            if(height[i]<height[j]) i++;
            else if(height[i]>height[j]) j--;
            else if(height[i]==height[j]){
                if(height[i+1]>height[j-1]) i++;
                else j--;
            }
        }
        return maxstore;
    }
};