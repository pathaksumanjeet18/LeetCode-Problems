class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map <char,char> mpp;char ch1 = 'a';int x = 0;
        for(int i = 0;i<key.size();i++){
            if(mpp.find(key[i])!=mpp.end())
                continue;
            else if(key[i] == ' '){
                continue;
            }
            else{
                char ch = key[i];
                mpp[ch] = ch1+x;
                x++;
                
            }
        }
        
        for(int i = 0;i<message.size();i++){
            if(message[i] == ' ')
                continue;
            else
                message[i] = mpp[message[i]];
            
        }
        
        return message;
    }
};