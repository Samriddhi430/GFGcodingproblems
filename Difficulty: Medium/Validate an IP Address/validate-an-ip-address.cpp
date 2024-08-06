//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        int n=str.size();
        int dot=0;
        string res="";
        for(int i=0;i<n;i++){
            if(str[i]!='.'){
                res+=str[i];
            }else{
                dot++;
                int num=stoi(res);
                if(num<0 || num>255)
                    return false;
                    res="";
            }
        }
        if(res.size()>0){
            int num=stoi(res);
            if(num<0 || num>255) return false;
            res="";
        }
        if(dot==3) return true;
        return false;
    
                
                
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends