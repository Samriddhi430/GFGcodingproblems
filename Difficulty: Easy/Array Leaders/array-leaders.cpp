//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> arr1;
        vector<int> arr2;
        for(int i=0;i<n;i++){
            arr2.push_back(arr[i]);
        }
        reverse(arr2.begin(),arr2.end());
        arr1.push_back(arr2[0]);
        for(int i=0;i<n-1;i++){
            if(arr2[i+1]>=arr1.back()){
                arr1.push_back(arr2[i+1]);
            }
        }
        reverse(arr1.begin(),arr1.end());
        return arr1;
        // Code here
    }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t; // testcases
    while (t--) {
        long long n;
        cin >> n; // total size of array

        int arr[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(n, arr);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends