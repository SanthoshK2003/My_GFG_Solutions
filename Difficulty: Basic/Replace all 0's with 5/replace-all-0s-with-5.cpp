//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    int ans=0;
    while(n>0)
    {
        int rem=n%10;
        if(rem==0)
        {
            rem=5;
        }
        ans=ans*10+rem;
        n=n/10;
    }
    n=ans;
    ans=0;
    while(n)
    {
        int rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends