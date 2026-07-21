class Solution {
public:
    string sortSentence(string s) {
        int size=s.size();
        vector<string> st(size);
        string word="";
        for(char c:s){
            if(c==' '){
                int pos=word.back()-'0'; 
                word.pop_back();   
                st[pos]=word;
                word="";

            }
            else{
                word+=c;
            }
        }
        int pos=word.back()-'0';
        word.pop_back();
        st[pos]=word;
        s="";
        for(string str:st){
            if(str.empty()) continue;
            if(!s.empty()) s+=" ";
            s+=str;
        }
        return s;
        
    }
}; 