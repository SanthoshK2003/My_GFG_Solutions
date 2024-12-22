//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    bool dfs(int node,int col,int colour[],vector<vector<int>>& adj)
    {
        colour[node]=col;
        for(auto it:adj[node])
        {
            if(colour[it]==-1)
            {
                if(dfs(it,!col,colour,adj)==false)
                    return false;;
            }
            if(colour[it]==col)
            {
                return false;
            }
        }
        return true;
    }
  public:
    bool isBipartite(vector<vector<int>>& adj) {
        // Code here 
        int V=adj.size();
        //visited array
        int colour[V];
        for(int i=0;i<V;i++)
        {
            colour[i]=-1;
        }
        //for connected components
        for(int i=0;i<V;i++)
        {
            if(colour[i]==-1)
            {
                if(dfs(i,0,colour,adj)==false)
                    return false;
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isBipartite(adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends