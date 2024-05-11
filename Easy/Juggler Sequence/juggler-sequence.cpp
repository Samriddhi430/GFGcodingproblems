//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  double sqrt(int n){
        // Implement binary search to find square root
        double low = 0, high = n;
        double epsilon = 0.00001; // Precision for double comparison
        while (high - low > epsilon) {
            double mid = (low + high) / 2;
            if (mid * mid < n)
                low = mid;
            else
                high = mid;
        }
        return high; // or high, since they're close enough
    }
    vector<int> jugglerSequence(int n) {
        vector<int> sequence;
        while (n != 1) {
            sequence.push_back(n);
            if (n % 2 == 1) {
                double root = sqrt(n);
                n = root * n;
            } else {
                n = sqrt(n);
            }
            
        }
        sequence.push_back(1);
        return sequence;
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
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends