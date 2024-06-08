//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    vector<int>ans;
	    int m=a.size();
	    int n=b.size();
	    int carry=0;
	    while(m>0 || n>0 || carry>0){
	        int x=0;
	        int y=0;
	        if(m>0)
	            x=a[--m];
	        if(n>0)
	            y=b[--n];
	       int sum=x+y+carry;
	       ans.push_back(sum % 10);
	       carry=sum/10;
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	    // code here
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends