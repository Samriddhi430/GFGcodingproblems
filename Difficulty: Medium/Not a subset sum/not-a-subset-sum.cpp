//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        int n=arr.size();
        long long ans;
        long long cnt=0;
         long long sum = 0;

        if(arr[0]>1){
            return 1;
        }
        for (int i = 0; i < arr.size(); i++) {
          
            if (arr[i] > sum + 1) {
                return sum + 1;
            }
            
            sum += arr[i];
        }
        return sum + 1;
        // Your code goes here.
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        auto ans = ob.findSmallest(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends