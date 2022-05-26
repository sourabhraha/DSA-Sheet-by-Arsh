// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        int n = arr.size();
        
        int cnt[27];
        memset(cnt, 0, sizeof(cnt));
        
        //97 -a
        for(int i=0; i<n; i++)
            cnt[arr[i] - 97]++;
            
        for(int i=1; i<= 26; i++)
            cnt[i] += cnt[i-1];
            
        char output[n+1];
        for(int i=n-1; i>=0; i--)
        {
            
            output[cnt[arr[i]-97]-1] = arr[i];
            cnt[arr[i]-97]--;
            
        }
        
        string ans;
        for(int i=0; i<n; i++)
            ans.push_back(output[i]);
            
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends