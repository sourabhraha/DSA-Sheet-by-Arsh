// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    string res;
    for(int i=0; i<src.length(); i++)
    {
        int cnt = 0;
        res.push_back(src[i]);
        
        while(src[i+1] == src[i])
        {
            cnt++;
            i++;
        }
        res += to_string(cnt+1);
        // i++;
            
            
    }
    return res;
}     
 
