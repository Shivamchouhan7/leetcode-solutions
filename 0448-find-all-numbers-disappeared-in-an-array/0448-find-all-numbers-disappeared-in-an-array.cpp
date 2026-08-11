class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set <int> s;
        vector<int> r;
        for(int x:nums){
            s.insert(x);
        }
        for(int i=1;i<=nums.size();i++){
            if(!s.contains(i)){
                r.push_back(i);
            }
        }
        return r;
    }
};