//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,
    int newColor,int delrow[],int delcol[],int initCol)
    {
        ans[row][col]=newColor;
        int n=ans.size();
        int m=ans[0].size();
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==initCol && ans[nrow][ncol]!=newColor)
            {
                dfs(nrow,ncol,ans,image,newColor,delrow,delcol,initCol);
            }
        }
    }
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // Code here
        int initCol=image[sr][sc];
        vector<vector<int>>ans=image;
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        dfs(sr,sc,ans,image,newColor,delrow,delcol,initCol);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> image(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> image[i][j];
        }
        int sr, sc, newColor;
        cin >> sr >> sc >> newColor;
        Solution obj;
        vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
        for (auto i : ans) {
            for (auto j : i)
                cout << j << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends