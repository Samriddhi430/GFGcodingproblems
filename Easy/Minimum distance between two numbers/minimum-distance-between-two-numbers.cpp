//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
          int one=-1 ,two=-1,mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            one=i;
            else if(a[i]==y)
            two=i;
            
            if(one != -1 && two !=-1)
            mini=min(mini,abs(one-two));
        }
        if(mini!=INT_MAX)
        return mini;
        return -1;
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends