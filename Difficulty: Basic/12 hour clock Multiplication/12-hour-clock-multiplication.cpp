//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int mulClock(int num1, int num2) {
        
        // code here
      num1=num1%12;
      num2=num2%12;
      int ans=num1*num2;
      return ans%12;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int num1,num2;
        
        cin>>num1>>num2;

        Solution ob;
        cout << ob.mulClock(num1,num2) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends