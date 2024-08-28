//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
         int n=arr.size();
        vector<int> ans;
        vector<pair<int,int>> tt;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        for(auto it: mpp){
            tt.push_back({it.second,it.first});
        }
        sort(tt.begin(),tt.end(),[](const pair<int,int>& a, pair<int,int>& b){
            if(a.first!=b.first){
                return a.first>b.first;
            }
            return a.second<b.second;
        });
        for(int i=0;i<tt.size();i++){
            while(tt[i].first--)
            ans.push_back(tt[i].second);
        }
        return ans;
        // Your code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends