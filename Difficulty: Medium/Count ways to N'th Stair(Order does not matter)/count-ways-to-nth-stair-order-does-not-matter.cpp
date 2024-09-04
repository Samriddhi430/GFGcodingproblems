//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	 int solve(vector<int>&dp,int n){
        if(n==0 || n==1)
        return 1;
        if(dp[n-1]!=-1)
        return dp[n-1];
        int ans=0;
        ans=1+solve(dp,n-1);
         ans=1+solve(dp,n-2);
        return dp[n-1]=ans;
    }
		int nthStair(int n){
		    vector<int>dp(n+1,-1);
            return solve(dp,n);
		    //  Code here
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends