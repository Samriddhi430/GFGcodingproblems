//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        int firstnum = 0;
        int secondnum = 0;
        vector<int>res;
        int smallmax = -1;
        int index = -1;
        int n = k;
        while(secondnum<arr.size()){
           while(n){
               if(arr[secondnum]>=smallmax){
                   smallmax = arr[secondnum];
                   index = secondnum;
               }
               secondnum++;
               n--;
           }
           res.push_back(smallmax);
           if(secondnum == arr.size()){
               return res;
           }
           if(index>firstnum){
               firstnum++;
               n = 1;
           }
           else{
               smallmax = -1;
               firstnum++;
               secondnum = firstnum;
               n=k;
           }
        }
        return res;
        // your code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends