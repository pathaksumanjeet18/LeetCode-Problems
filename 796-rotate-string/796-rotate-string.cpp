class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)
            return true;
        int i = 0;
        while(i<s.length()){
            string ex = "";
            ex += s[s.length()-1];
            s.pop_back();
            s = ex+s;
            if(s==goal)
                return true;
            i++;
        }
        return false;
    }
};