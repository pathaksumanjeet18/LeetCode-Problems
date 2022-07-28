class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(int i = 0;i<s.length();i++){
            if((s[i] >= 'a' and s[i] <= 'z') ){
                t += s[i];
            }
            else if(s[i]>='A' and s[i]<='Z'){
                t += (s[i]+32);
            }
            else if(s[i]>='0' and s[i]<='9'){
                t+=s[i];
            }
        }
        int l = 0;int r = t.size()-1;
        while(l<=r){
            if(t[l]!=t[r])
                return false;
            l++;r--;
        }
        return true;
    }
    bool checkpalindrome(string s,int l ,int r){
        if(l>r)
            return true;
        if(s[l]!=s[r])
            return false;
        return checkpalindrome(s,l+1,r-1);
    }
};