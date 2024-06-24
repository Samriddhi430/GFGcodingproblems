//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        if(n+n<q || q==1){
            return 0;
        }
        else if(n+n==q){
            return 1;
        }else if(n==q){
            return n-1;
        }else{
            if(q>=n +1){
                
                return n+n-q+1;
            }else{
                return q-1;
            }
        }
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends