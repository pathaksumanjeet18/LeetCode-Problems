class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int i = n-1;int sum = 0;
        while(i>=0){
            if(s[i]=='I'){
                sum += 1;
                i--;
            }
            else if(s[i]=='V'){
                if(i>0 and s[i-1]=='I'){
                    sum += 4;i = i-2;
                }
                else{
                    sum += 5;
                    i--;
                }
            }
            else if(s[i]=='X'){
                if(i>0 and s[i-1]=='I'){
                    sum += 9;
                    i = i-2;
                }
                else{
                    sum += 10;
                    i--;
                }
            }
            else if(s[i]=='L'){
                if(i>0 and s[i-1]=='X'){
                    sum += 40;
                    i = i-2;
                }
                else{
                    sum += 50;
                    i--;
                }
            }
            else if(s[i]=='C'){
                if(i>0 and s[i-1]=='X'){
                    sum += 90;
                    i = i-2;
                }
                else{
                    sum += 100;
                    i--;
                }
            }
            else if(s[i]=='D'){
                if(i>0 and s[i-1]=='C'){
                    sum += 400;
                    i = i-2;
                }
                else{
                    sum += 500;
                    i--;
                }
            }
            else if(s[i]=='M'){
                if(i>0 and s[i-1]=='C'){
                    sum += 900;
                    i = i-2;
                }
                else{
                    sum += 1000;
                    i--;
                }
            }
            
        }
        return sum;
    }
};