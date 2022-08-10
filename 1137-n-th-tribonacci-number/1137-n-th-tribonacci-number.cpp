class Solution {
public:
    int t[100];
    int tribonacci(int n) {
        for(int i = 0;i<n+1;i++){
            if(i<=1)
                t[i] = i;
            else if(i==2)
                t[i] = 1;
            else
                t[i] = t[i-3]+t[i-2]+t[i-1];
        }
        return t[n];
    }
};