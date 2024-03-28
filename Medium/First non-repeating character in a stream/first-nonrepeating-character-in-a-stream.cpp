//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		     string result = "";
        unordered_map<char, int> charCount;
        queue<char> charQueue;

        for (char c : A) {
            charQueue.push(c);
            charCount[c]++;

            while (!charQueue.empty() && charCount[charQueue.front()] > 1) {
                charQueue.pop();
            }

            if (charQueue.empty()) {
                result += '#';
            } else {
                result += charQueue.front();
            }
        }

        return result;
		    // Code here
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends