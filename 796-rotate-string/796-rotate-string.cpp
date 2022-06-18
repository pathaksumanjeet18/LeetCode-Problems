class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)
            return true;
        if(s.length()!=goal.length())
            return false;
        // int i = 0;
        // while(i<s.length()){
        //     string ex = "";
        //     ex += s[s.length()-1];
        //     s.pop_back();
        //     s = ex+s;
        //     if(s==goal)
        //         return true;
        //     i++;
        // }
        
        string temp = s+s;
        return temp.find(goal)!=string::npos?true:false;
        return false;
    }
};