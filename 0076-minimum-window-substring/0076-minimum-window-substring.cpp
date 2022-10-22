class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> mp;int mini = INT_MAX;int st = -1;int end = -1;
        if(t.length() > s.length() or t == "")
            return "";
        for(int i = 0;i<t.length();i++){
            mp[t[i]]++;
        }
        int count = mp.size();
        int i = 0;int j = 0;
        while(j<s.length()){
             if(mp.find(s[j]) != mp.end()){
                 mp[s[j]]--;
                 if(mp[s[j]] == 0)
                     count--;
             }
             if(count>0)
                 j++;
             else if(count==0){
                 if(j-i+1 <= mini){
                     mini = j-i+1;
                     st = i;
                     end = j;
                 }
                 while(count==0){
                     
                     if(mp.find(s[i])==mp.end()){
                         i++;
                         if(j-i+1 <= mini){
                             mini = j-i+1;
                             st = i;
                             end = j;
                         }
                     }
                     else{
                         mp[s[i]]++;
                         if(mp[s[i]] > 0){
                             count++;
                             i++;
                         }
                         else{
                             i++;
                             if(j-i+1 <= mini){
                                 mini = j-i+1;
                                 st = i;
                                 end = j;
                             }
                         }
                     } 
                     
                 }
                 j++;
             }
            
        }
        string ret = "";
        if(st!= -1 or end != -1){
            for(int k = st;k<=end;k++){
                ret += s[k];
            }
        }
        return ret;
    }
};