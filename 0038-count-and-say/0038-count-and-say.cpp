class Solution {
public:
    string ans(int n,string s,int j){
        if(j>=n){
            return s;
        }
        string s1 = "";
        int i = 0;
        while(i<s.length()){
            int count = 1;int t = s[i]-'0';
            while(i<s.length() and s[i]==s[i+1]){
                count++;
                i++;
            }
            s1 += to_string(count) + to_string(t);
            i++;
        }
        j++;
        return ans(n,s1,j);
    }
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        return ans(n,"1",1);
    }
};