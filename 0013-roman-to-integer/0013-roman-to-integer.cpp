class Solution {
public:
    int romanToInt(string s) {
        int i=0;
        int n=s.size();
        int sum=0;
        while(i<n){
            char c=s[i];
            if(c=='I'){
                if(s[i+1]=='V'){
                    sum+=4;
                    i++;
                }
                else if(s[i+1]=='X'){
                    sum+=9;
                    i++;
                }
                else{
                    sum+=1;
                }
            }
            else if(c=='X'){
                if(s[i+1]=='L'){
                    sum+=40;
                    i++;
                }
                else if(s[i+1]=='C'){
                    sum+=90;
                    i++;
                }
                else{
                    sum+=10;
                }
            }
            else if(c=='C'){
                if(s[i+1]=='D'){
                    sum+=400;
                    i++;
                }
                else if(s[i+1]=='M'){
                    sum+=900;
                    i++;
                }
                else{
                    sum+=100;
                }
            }
            else if(c=='V'){
                sum+=5;
            }
            else if(c=='L'){
                sum+=50;
            }
            else if(c=='D'){
                sum+=500;
            }
            else if(c=='M'){
                sum+=1000;
            }
            i++;
        }
        return sum;
    }
};