//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
         if(arr[0]==1){
            return 0;
        }
        if(arr[n-1]==0){
            return -1;
        }
        int low=0;
        int high=n-1;
        int mid=low+(high-low)/2;

    
        while(low<=high && mid<n-1){
             mid=low+(high-low)/2;
            
            if(arr[mid]==0 && arr[mid+1]==1){
                return mid+1;
            }
            else if(arr[mid]==1 && arr[mid+1]==1){
                high=mid-1;
                // mid=low+(mid-low)/2;
            }
            else{
                low=mid+1;
            }
        }
       return -1;
    
        // code here
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends