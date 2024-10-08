//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void printArr(int n, int arr[]) {
        for(int i=0; i<n; i++) 
            cout<<arr[i]<<" ";
        
        cout<<endl;
        // Your code for printing array here
    }

    void setToZero(int n, int arr[]) {
        memset(arr, 0, sizeof(int)*n);
        // Use memset to set arr to zero
    }

    void xor1ToN(int n, int arr[]) {
        for(int i=0; i<n; i++) {
            arr[i] = arr[i]^i;
        }
        // Xor arr[i]^i
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.xor1ToN(n, arr);
        obj.printArr(n, arr);
        obj.setToZero(n, arr);
        obj.printArr(n, arr);
    }
    return 0;
}

// } Driver Code Ends