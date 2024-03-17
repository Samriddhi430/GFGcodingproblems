//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  int smallestStr(string arr[], int N){
        int smallest = arr[0].length();
        for (int i = 1; i < N; i++){
            int l = arr[i].length();
            if (l < smallest){
                smallest = l;
            }
        }
        return smallest;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        int small = smallestStr(arr, N);
        string prefix = "";
        
        for(int i = 0; i < small; i++){
            for (int j = 0; j < N - 1; j++){
                if (arr[j][i] != arr[j+1][i]){
                    if (prefix == ""){
                        return "-1";
                    }
                    return prefix;
                }
            }
            prefix += arr[0][i];
        }
        return prefix;
        // your code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends