class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack=="" and needle==""){
            return 0;
        }
        else if(needle==""){
            return -1;
        }
        else if(haystack==""){
            return -1;
        }
        for(int i = 0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                bool flag = true;int j = i;int c = 0;
                for(;c<needle.size() and j<haystack.size();c++){
                    if(haystack[j]!=needle[c]){
                        flag = false;
                        break;
                    }
                    j++;
                }
                if(flag and c==(needle.size())){
                    return i;
                }
            }
        }
        return -1;
    }
};