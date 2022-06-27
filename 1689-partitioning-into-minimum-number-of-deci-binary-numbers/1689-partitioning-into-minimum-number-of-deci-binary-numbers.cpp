class Solution {
public:
    int minPartitions(string n) {
        int x = 0;
        for(int i = 0;i<n.length();i++){
            int c = n[i] - '0';
            x = max(c,x);
        }
        return x;
    }
};