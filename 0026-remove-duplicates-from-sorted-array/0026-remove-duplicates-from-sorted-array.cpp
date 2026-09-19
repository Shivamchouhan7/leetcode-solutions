class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> r=nums;
        unordered_set<int> s;
        nums.clear();
        for(int x:r){
            if(s.find(x)==s.end()){
                s.insert(x);
                nums.push_back(x);
            }
        }
        return nums.size();
    }
};