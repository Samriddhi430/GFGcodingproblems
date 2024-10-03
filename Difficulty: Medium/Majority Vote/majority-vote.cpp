//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
          int e1 = -1, e2 = -1, c1 = 0, c2 = 0;
        
        // First pass: Identify potential candidates
        for (int i : nums) {
            if (e2 != i && c1 == 0) {  // Assign e1 if its count is 0
                e1 = i;
                c1 = 1;
            } else if (e1 != i && c2 == 0) {  // Assign e2 if its count is 0
                e2 = i;
                c2 = 1;
            } else if (e1 == i) {  // Increment count if e1 matches
                c1++;
            } else if (e2 == i) {  // Increment count if e2 matches
                c2++;
            } else {  // Decrement both counts if no match
                c1--;
                c2--;
            }
        }
        
        // Second pass: Validate the candidates
        c1 = 0, c2 = 0;
        for (int i : nums) {  // Count occurrences of e1 and e2
            if (e1 == i) {
                c1++;
            } else if (e2 == i) {
                c2++;
            }
        }
        
        // Add valid candidates to the result
        vector<int> res;
        if (c1 >= nums.size() / 3 + 1) res.push_back(e1);
        if (c2 >= nums.size() / 3 + 1) res.push_back(e2);
        
        return res.empty() ? vector<int>{-1} : res;
        // Your code goes here.
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends