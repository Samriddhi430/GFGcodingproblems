//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        vector<int> ans;
        stack<int> st;
        int n=str.length();
        int count=1;
        for(int i=0;i<n;i++){
            char a= str[i];
            if(a=='('){
                st.push(count);
                ans.push_back(count);
                count++;
            }
            else if(a==')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
        // Your code goes here
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends