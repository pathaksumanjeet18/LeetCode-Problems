class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int> mpp;
        for(int i = 0;i<p.size();i++){
            mpp[p[i]]++;
        }
        int i = 0;int j = 0;int n = s.size();int k = p.size();
        if(k>n){
            return {};
        }
        map<char,int> mpp1;vector<int> ans;
        while(j<n){
            if(j-i+1<k){
                mpp1[s[j]]++;
                j++;
            }
            else{
                mpp1[s[j]]++;
                if(mpp1==mpp){
                     ans.push_back(i);
                }
                mpp1[s[i]]--;
                if(mpp1[s[i]]==0){
                    mpp1.erase(s[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};