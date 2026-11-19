class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> group;
        for (string & word:strs ){
            string key=word;

            sort(key.begin(),key.end());
            group[key].push_back(word);
        }
        vector<vector<string>> r;
        for(auto x:group){
            r.push_back(x.second);
        }
        return r;
    }
};