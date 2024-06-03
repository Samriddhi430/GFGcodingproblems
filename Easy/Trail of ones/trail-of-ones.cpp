//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int numberOfConsecutiveOnes(int n) {
        long long mod= (int)1e9+7;
        long long res=1;
        long long a=1;
        long long b=1;
        if(n==1 ||  n==2){
            return 1;
        }
        for(int i=3;i<=n;i++){
            long long c=(a+b)%mod;
            a=b;
            b=c;
            res=((res*1ll*2)+a)% mod;
            
        }
        return (int)res;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends