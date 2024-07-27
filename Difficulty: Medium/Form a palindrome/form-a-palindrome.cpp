//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string str){
         int n = str.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Fill the table. The gap represents the length of the substring.
        for (int gap = 1; gap < n; ++gap) {
            for (int l = 0, r = gap; r < n; ++l, ++r) {
                if (str[l] == str[r]) {
                    dp[l][r] = dp[l + 1][r - 1];
                } else {
                    dp[l][r] = min(dp[l + 1][r], dp[l][r - 1]) + 1;
                }
            }
        }

        // The answer for the whole string is in dp[0][n-1]
        return dp[0][n - 1];
    //complete the function here
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends