class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<long double,long double> mpp;//1 2 1 2 3 1
        long double n = 0;
        long double i = 0;
        long double m = tasks.size();
        while(i<m){
            if(mpp.find(tasks[i])==mpp.end()){
                n++;
                mpp[tasks[i]] = n;
                i++;
            }
            else{
                n++;
                long long int x = mpp[tasks[i]];
                if((n-x)<=space){
                    n += (space-(n-x)+1);
                    mpp[tasks[i]] = n;
                    i++;
                }
                else{
                    mpp[tasks[i]] = n;
                    i++;
                }
                 
            }
        }
        return n;
    }
};