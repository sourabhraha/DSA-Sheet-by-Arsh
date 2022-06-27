// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.

bool isValid(int node, int i, int n, int color[], bool graph[101][101])
{
    for(int j=0; j<n; j++)
    {
        if(j != node && graph[j][node] == 1 && color[j] == i)
            return false;
    }
     return true;
    
}


bool isPossible(int node, int m, int n, int color[], bool graph[101][101])
{
    if(node == n)
        return true;
        
    for(int i=1; i<=m; i++)
    {
        if(isValid(node, i, n, color,  graph))
            {
                color[node] = i;
                if(isPossible(node+1, m, n, color, graph)) return true;
                color[node] = 0;
            }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int n) {
    // try all posibilities
    
    int color[n] = {0};
    if(isPossible(0, m, n, color, graph))
        return true;
    return false;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends