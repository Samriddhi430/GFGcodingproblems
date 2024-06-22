//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {
        long long ans = -1,temp = 0;
        bool pass = false,digitFound = false;
        for(char ch:sentence){
            if(isdigit(ch)){
                if(!pass)digitFound = true;
                if(ch=='9'){pass = true;digitFound = false;}
                else temp = temp * 10 + (ch-'0');
            }
            else{
                if(!pass && digitFound) ans = max(ans,temp);
                temp = 0;
                pass = false;
            } 
        }
        if(!pass && digitFound)ans = max(ans,temp);
        return ans;

        // code here
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
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends