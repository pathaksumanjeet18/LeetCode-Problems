class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int x = 1;
        while(x<=num){
            long long int c = 1ll*x*x;
            if(c==num){
                return true;
            }
            if(c>num){
                break;
            }
            x++;
        }
        return false;
    }
};