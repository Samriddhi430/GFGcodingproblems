//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        long long ans=0;
        long long currentconfig=0;
        long long total=0;
        for(long long i=0;i<n;i++){
            total+=a[i];
            currentconfig+=i*a[i];
        }
        ans=currentconfig;
        for(int i=1;i<n;i++){
            currentconfig=currentconfig+total-(long long)n*a[n-i];
            ans=max(ans,currentconfig);
        }
        return ans;
        // Your code here
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends