class Solution {
public:
    int mySqrt(int x) {
        long long i = 0;int ans = 0;
        while(i<=x){
            if(((long long)(i*i))==x){
                return i;
            }
            else if(((long long)(i*i)) >x){
                return (i-1);
            }
            else{
                i++;
            }
        }
        return i;
    }
};