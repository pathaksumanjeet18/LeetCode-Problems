class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";int i = 0;
        while(i<chars.size()){
            int count = 1;
            while(i<chars.size()-1 and chars[i]==chars[i+1] ){
                count++;
                i++;
            }
            if(count!=1){
                s += chars[i] + to_string(count);
            }
            else{
                s += chars[i];
            }
            i++;
        }
        chars.clear();
        for(int i = 0;i<s.size();i++){
            chars.push_back(s[i]);
        }
        return s.size();
    }
};