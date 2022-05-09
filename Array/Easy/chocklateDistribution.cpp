class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        long long size = a.size();
        sort(a.begin(), a.end());
        if(m==1){
            return 0;
        }
        
        else if(n == m)
        {
            return a[size-1] - a[0];
        }
        
        else{
            

            long long st = 0, en = st+m-1;
            long long ans = INT_MAX;
            
            while(en< size)
            {
                
                ans = min(ans, a[en] - a[st]);
                st++;
                en = st+m-1;
               
            }
             return ans;
        }
       
        
    } 