//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
         unordered_map<int, int> mp;
        int a=-1, b=-1;
        int n=arr.size();
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(int i=1; i<=n; i++){
            if(mp[i]>1){
                b=i;
            }else if(mp[i]==0){
                a=i;
            }
        }
        return {b, a};
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends