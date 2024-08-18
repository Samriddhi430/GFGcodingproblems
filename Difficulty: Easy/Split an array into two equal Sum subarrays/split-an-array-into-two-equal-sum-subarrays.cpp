//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
         long long sum=accumulate(arr.begin(),arr.end(),0);
        if(sum&1) return 0;
        
        sum=sum/2;
        for(int i=0;i<arr.size();i++){
            sum-=arr[i];
            if(sum==0) return 1;
            if(sum<0) return 0;
        }
        return 0;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends