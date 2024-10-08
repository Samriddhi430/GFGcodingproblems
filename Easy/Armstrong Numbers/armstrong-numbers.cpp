//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
       int org=n;
        int sum=0;
        while(n>0)
        {
            int dig=n%10;
            sum+=dig*dig*dig;
            n/=10;
        }
        return(sum==org)?"Yes":"No";
    }
        // code here
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends