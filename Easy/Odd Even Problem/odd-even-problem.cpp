//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        unordered_map<char,int>m;
        for(auto it:s){
            m[it]++;
        }
        int x = 0;
        int y = 0;
        for(auto it:m){
            int id = (it.first-'a')+1;
            //cout<<idx<<endl;
            if(id%2==0 && it.second%2==0){
                x++;
            }
            else if(id%2!=0 && it.second%2!=0){
                y++;
            }
        }
        if((x+y)%2==0){
            return "EVEN";
        }
        return "ODD";
    }
};
        // code here
    


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends