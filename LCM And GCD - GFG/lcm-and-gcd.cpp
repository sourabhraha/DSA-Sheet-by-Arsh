// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    long long gcd(long long a, long long b)
    {
        if(a == 0)
            return b;
        return gcd(b%a, a);
    }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
       long long b = max(A, B);
       long long a = min(A, B);
       
       long long gcdAns = gcd(a, b);
       long long lcm = (a*b) / gcd(a, b);
       
       vector<long long>ans;
       ans.push_back(lcm);
       ans.push_back(gcdAns);
       return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends