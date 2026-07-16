class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse={
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        unordered_set<string> s;
    
        for(string word:words){
            string ss="";
            for(char c:word){
                ss+=morse[c-'a'];
            }
            s.insert(ss);
        }
        return s.size();
    }
   
};