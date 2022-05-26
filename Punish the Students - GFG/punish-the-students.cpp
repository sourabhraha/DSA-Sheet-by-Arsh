// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int shouldPunish (int roll[], int marks[], int n, double avg)
    {
            int swaps = 0;
            
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                 
                    
                    if(roll[j] > roll[j+1]){
                        
                        swap(roll[j], roll[j+1]);
                        swaps++;
                    }
                        
                }
                
            }
           
            int sum = 0;
            for(int i=0; i<n; i++)
                sum += marks[i];

            sum -= swaps;
            double punish = sum / n;
            
            return (avg >= punish) ? 0 : 1;
            return swaps;
          
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}
  // } Driver Code Ends