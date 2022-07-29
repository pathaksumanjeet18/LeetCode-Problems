class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         char ch = '1';
        map<char,char> mpp;
        for(int i = 0;i<pattern.size();i++){
            if(mpp.find(pattern[i])==mpp.end()){
                mpp[pattern[i]] = ch;
                ch++;
            }
        }
        for(int i = 0;i<pattern.size();i++){
            pattern[i] = mpp[pattern[i]];
        }
        vector<string> v;
        for(int j = 0;j<words.size();j++){
            map<char,char> mpp1;
            char ch1 = '1';
            string s = words[j];
            for(int i = 0;i<words[j].size();i++){
                if(mpp1.find(words[j][i])==mpp1.end()){
                    mpp1[words[j][i]] = ch1;
                    ch1++;
                }
            }
            for(int i = 0;i<words[j].size();i++){
                words[j][i] = mpp1[words[j][i]];
            }
            if(pattern == words[j])
                v.push_back(s);
        }
         
        return v;
    }
};