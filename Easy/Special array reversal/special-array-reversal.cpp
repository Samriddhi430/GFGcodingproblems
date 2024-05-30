//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        int i=0;
        int j=str.length()-1;
        while(i<j){
            while(!isalpha(str[i])){
                i++;
            }
            while(!isalpha(str[j])){
                j--;
            }
            if(i<j){
                swap(str[i++],str[j--]);
            }
        }
        return str;
        //code here.
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends