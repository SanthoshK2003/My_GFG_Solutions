//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  private:
  bool checkPalin(int num)
  {
      int temp=0;
      int num_copy=num;
      while(num>0)
      {
          temp=temp*10+num%10;
          num=num/10;
      }
      if(temp==num_copy)
      {
          return 1;
      }
      else
      {
          return 0;
      }
  }
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(!checkPalin(arr[i]))
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        cout << (ob.isPalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends