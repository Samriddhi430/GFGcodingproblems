//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int rectanglesInCircle(int r) {
         int ans=0;
        for(int i=1;i<2*r;i++)
        {
            for(int j=1;j<2*r;j++)
            {
                if(i*i+j*j<=4*r*r)// length of diagonal should be less than or equal to diameter of circle
                ans++;
            }
        }
        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}
// } Driver Code Ends