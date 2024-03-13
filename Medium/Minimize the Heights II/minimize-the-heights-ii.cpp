//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort (arr , arr+n);
        // minimum possible diff can created without any edge cases 
        int diff = arr[n-1] - arr[0];
        
        int mini , maxi ;
        for(int i = 1;i<n ;i++){
            if(arr[i]-k<0)  continue;
            // try to find any another maximum possible value
            // comparing each elemment of array with arr[n-1]-k if any minimum is possible
            maxi = max((arr[i-1]+k) , (arr[n-1]-k));
            // similarly compare the minimm possible value from the first  index that is arr[0]+k
            mini = min(arr[i]-k , arr[0]+k);
            // compare the minimum value if generated
            diff = min(diff , maxi - mini);
        }
        return diff;
    }



        // code here
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends