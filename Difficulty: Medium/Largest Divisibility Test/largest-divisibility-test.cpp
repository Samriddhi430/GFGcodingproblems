//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  bool isdivisible(string s){
      int n=s.length();
      int rem=0;
      for(int i=0;i<n;i++){
          rem=(rem*10+(s[i]-'0'))%17;
      }
      return rem==0;
  }
    string largestDivisible(string n){
        sort(n.begin(),n.end(),greater<char>());
        do{
            if(n[0]!='0' && isdivisible(n)){
                return n;
            }
        }while(prev_permutation(n.begin(),n.end()));
        return "Not Possible";
        
            
        }
        // code here
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        Solution ob;
        cout<<ob.largestDivisible(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends