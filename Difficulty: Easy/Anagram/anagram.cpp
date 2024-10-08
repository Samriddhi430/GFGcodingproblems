//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int freqtable[256]={0};
        for(int i=0;i<a.size();i++){
            freqtable[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            freqtable[b[i]]--;
        }
        for(int i=0;i<256;i++){
            if(freqtable[i]!=0){
                return false;
            }
        }
        return true;
        
        // Your code here
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends