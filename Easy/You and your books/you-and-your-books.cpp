//{ Driver Code Starts
#include <algorithm>
#include <cstdio>
#include <iostream>
//#include<Windows.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
         long long ans=0L;
       pair<long long,int>p;
       p={0,0};
       for(int i=0;i<n;i++){
           if(arr[i]<=k){
               if(p.second+1==i) p.first+=arr[i],p.second=i;
               else ans=max(ans,p.first),p={arr[i],i};
           }
           ans=max(ans,p.first);
       }
       return ans;
        // Your code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        Solution ob;
        cout << ob.max_Books(ar, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends