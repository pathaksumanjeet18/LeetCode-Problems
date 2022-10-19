class Solution {
public:
    static bool cmp(const pair<string,int> &a , const pair<string,int> &b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mpp;
        for(int i =0;i<words.size();i++){
            mpp[words[i]]++;
        }
        vector<pair<string,int>> v;
        for(auto it : mpp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),cmp);
        words.clear();
        for(int i = 0;i<v.size(),k>0;i++,k--){
            words.push_back(v[i].first);
            
        }
        return words;
            
    }
};