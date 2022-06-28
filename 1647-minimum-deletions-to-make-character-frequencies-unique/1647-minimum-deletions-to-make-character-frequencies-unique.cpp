class Solution {
public:
    int minDeletions(string s) {
        vector<int> alpha(26,0);
        for(int i = 0;i<s.length();i++){
            alpha[s[i]-97]++;
        }
        vector<int> inti;
        for(int i = 0;i<26;i++){
            if(alpha[i]!=0){
                inti.push_back(alpha[i]);
            }
        }
        sort(inti.begin(),inti.end());
        int mini = INT_MAX;int count = 0;
        for(int i = inti.size()-1;i>0;i--){
            if(inti[i]<mini and inti[i]!=0){
                mini = inti[i];
            }
            if(inti[i]==inti[i-1] ){
                inti[i-1]--;
                count++;
            }
            else if(inti[i-1]>=mini){
                count += (inti[i-1]-mini+1);
                inti[i-1] = (mini-1);
                
            }
            
        }
        return count;
        
    }
};