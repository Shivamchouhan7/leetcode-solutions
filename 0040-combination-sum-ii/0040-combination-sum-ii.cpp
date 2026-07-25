class Solution {
public:
set<vector<int>> s;
void cs(vector<int>& arr,int i,vector<int>& comb,vector<vector<int>>&ans,int tar){
    if(tar==0){
        if(s.find(comb)==s.end()){
            s.insert(comb);
            ans.push_back(comb);
        }
            return;
        
    }
    if(i==arr.size()||tar<0){
        return;
    }
    for (int j = i; j < arr.size(); j++) {
            if (j > i && arr[j] == arr[j - 1])
                continue;
            if (arr[j] > tar)
                break;
            comb.push_back(arr[j]);
            cs(arr, j + 1, comb, ans, tar - arr[j]);
            comb.pop_back();
        }
}
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        vector<int> comb;
        vector<vector<int>> ans;
        cs(c,0,comb,ans,target);
        return ans;
    }
};