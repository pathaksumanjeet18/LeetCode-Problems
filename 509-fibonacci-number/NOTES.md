Memoization
int t[100];
int fib(int n) {
memset(t,-1,sizeof(t));
return ans(n);
}
int ans(int n){
if(n==0)
return 0;
if(n==1)
return 1;
if(t[n]!=-1)
return t[n];
return t[n] = (fib(n-1)+fib(n-2));
}