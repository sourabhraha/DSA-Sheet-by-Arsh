// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
  
  
    // sort(arr, arr+size);
    
    // int i=0, j=1;
    
    // while(i<size && j<size)
    // {
        
    //     if( i != j && abs(arr[i] - arr[j]) == n)
    //         return true;
            
    //     else if(abs(arr[i] - arr[j]) > n)
    //         i++;
        
    //     else
    //         j++;
        
    // }
    
    // return false;
    
    unordered_map<int, int>ump;
    
    for(int i=0; i<size; i++){
        ump[arr[i]]++;
        
        if(n == 0 && ump[arr[i]] > 1)
            return true;

    }   
    if(n == 0)
        return false;
        
    for(int i=0; i<size; i++)
    {
        if(n != arr[i] && ump.find(abs(n-arr[i])) != ump.end())
            return true;
    }
    return false;
}