//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    const int mod=1e9+7;
    int Maximize(int a[],int n)
    {
        sort(a,a+n);
    long long int ans=0;
    for(int i=0;i<n;i++){
        ans=(ans%mod+(a[i]*1ll*i)%mod)%mod;
    }
    return ans;
        // Complete the function
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends