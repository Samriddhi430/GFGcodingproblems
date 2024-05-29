//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        stack<int>St;
        St.push(-1);
        int maxLength=0;
        for(int i=0;i<S.length();i++){
            char ch=S[i];
            if(ch=='('){
                St.push(i);
            }
            else{
                St.pop();
                if(St.empty()){
                    St.push(i);
                }else{
                    int len= i-St.top();
                    maxLength=max(len,maxLength);
                }
            }
        }
        return maxLength;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends