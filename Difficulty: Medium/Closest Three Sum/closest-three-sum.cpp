//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int sum=0;
        int mini=INT_MAX;
        int ans=INT_MIN;
        for(int i=0;i<n-2;i++){
            int low=i+1,high=n-1;
            while(low<high){
                sum=arr[i]+arr[low]+arr[high];
                int diff=abs(sum-target);
                if(diff<=mini){
                    if(diff==mini){
                        ans=max(ans,sum);
                    }else{
                        ans=sum;
                        mini=diff;
                    }
                }
                if(sum>target){
                    high--;
                }else{
                    low++;
                }
            }
        }
            return ans;
        // Your code goes here
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends