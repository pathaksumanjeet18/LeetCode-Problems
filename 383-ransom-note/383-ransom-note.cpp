class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        for(int i=0;i<ransomNote.size();i++){
            m[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            if(m.find(magazine[i])!=m.end()){
                m[magazine[i]]--;
            }
        }
        for(auto i:m){
            if(i.second>0){
                return false;
            }
        }
        return true;
    }
};