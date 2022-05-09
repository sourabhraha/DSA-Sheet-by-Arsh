// Sourabh Raha
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL)
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    fastio;
    vector<ll>v{1,1,2,3,4,5,1};
    auto last = v.end();
    remove(v.begin(), v.end()+1, 1);
    cout<<v.size();
    cout<<endl;

    for(auto it = v.begin(); it!= last; it++)
        cout<<*it<<" ";
    return 0;
}