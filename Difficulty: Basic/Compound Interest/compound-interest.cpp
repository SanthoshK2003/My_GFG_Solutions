//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int getCompundInterest(int P, int T , int N , int R) {
        // code here
        double temp=1;
        double p=P*temp;
        double t=T*temp;
        double n=N*temp;
        double r=R*temp;
        int amount = p*pow((1+r/(100*n)),n*t);
        return amount;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int P,T,N,R;
        
        cin>>P>>T>>N>>R;

        Solution ob;
        cout << ob.getCompundInterest(P,T,N,R) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends