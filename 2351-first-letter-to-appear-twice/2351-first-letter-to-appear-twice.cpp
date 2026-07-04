class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> m;
        char ch='\0';
        for(char c:s){
            if(m.find(c)!=m.end()){
                return c;
               
            }
            m[c]++;
        }
        return ch;
    }
};