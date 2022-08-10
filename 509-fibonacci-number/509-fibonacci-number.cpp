class Solution {
public:
    int t[100];
    
    int fib(int n) {
         for(int i = 0;i<n+1;i++){
             if(i<=1)
                 t[i] = i;
             else
                 t[i] = t[i-1]+t[i-2];
         }
        return t[n];
    }
     
};