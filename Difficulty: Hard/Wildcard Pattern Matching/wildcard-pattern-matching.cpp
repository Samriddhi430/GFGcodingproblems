//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int dp[200+1][200+1];
    /*You are required to complete this method*/
    int wildCard(string pattern, string str) {
        memset(dp,-1,sizeof(dp));
        return ok(0,0,pattern,str);
    }
    bool ok(int i,int j,string & pattern,string& str) {
        if(i>=pattern.size() && j>=str.size()){
            return true;
        }else if(i>=pattern.size()){
            return false;
        }else if(j>=str.size()){
            if(pattern[i]=='*'){
                return ok(i+1,j,pattern,str);
            }
            return false;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        bool match=false;
       
             if (pattern[i] == '*') {
           
            match = ok(i + 1, j, pattern, str) || ok(i, j + 1, pattern, str);
        } else if (pattern[i] == '?' || pattern[i] == str[j]) {
            
            match = ok(i + 1, j + 1, pattern, str);
        } else {
            match = false;
        }
    
       
        return dp[i][j] = match;
        
        
    
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        cout << obj.wildCard(pat, text) << endl;
    }
}

// } Driver Code Ends