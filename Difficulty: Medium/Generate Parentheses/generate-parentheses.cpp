//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
          vector<string>res;
        backTrack(0,0,"",n,res);
        return res;
    }
    private:
    void backTrack(int open,int close,string s,int n,vector<string>&res)
    {
        if(open==n && close==n)
        {
            res.push_back(s);
            return;
        }
        if(open<n)
        {
            backTrack(open+1,close,s+"(",n,res);
        }
        if(close<open)
        {
            backTrack(open,close+1,s+")",n,res);
        }
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	
cout << "~" << "\n";
}
	return 0; 
} 

// } Driver Code Ends