// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:


    void calSum(int i, int n, vector<int>arr, vector<int>&ans, vector<int>&contain)
    {
        if(i == n)
        {
            int sum = 0;
            for(auto it:contain) sum += it;
            ans.push_back(sum);
            return;
        }
        
        contain.push_back(arr[i]);
        calSum(i+1, n, arr, ans, contain);
        contain.pop_back();
        calSum(i+1, n, arr, ans, contain);
    }


    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        vector<int>contain;
        calSum(0, N, arr, ans, contain);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends