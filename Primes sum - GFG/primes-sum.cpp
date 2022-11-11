//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    bool isPrime(int N){
        if(N<=1){
            return false;
        }
        for(int i = 2;i*i<=N;i++){
            if(N%i == 0){
                return false;
            }
        }
        return true;
    }
    string isSumOfTwo(int N){
        // code here
        int x = 0,y = 0;
        if(N%2 == 0){
            x = (N/2);
            y = (N/2);
        }
        else{
            x = (N/2);
            y = (N/2) + 1;
        }
        while(x>=0 and y<=N){
            if(isPrime(x) and isPrime(y)){
                return "Yes";
            }
            x--;
            y++;
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends