//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        dfs(m, ans, "", 0, 0, n);
        return ans;
    }

private:
    void dfs(vector<vector<int>>& m, vector<string>& ans, string path, int i, int j, int n) {
         // Check boundaries and obstacles
        if (i < 0 || i >= n || j < 0 || j >= n || m[i][j] == 0) return;
        
        // Base case: reached the bottom-right corner
        if (i == n - 1 && j == n - 1) {
            ans.push_back(path);
            return;
        }
        

        // Store the current cell value and mark it as visited
        int temp = m[i][j];
        m[i][j] = 0;

        // Explore all possible directions
        dfs(m, ans, path + 'D', i + 1, j, n); // Down
        dfs(m, ans, path + 'U', i - 1, j, n); // Up
        dfs(m, ans, path + 'R', i, j + 1, n); // Right
        dfs(m, ans, path + 'L', i, j - 1, n); // Left

        // Restore the original cell value
        m[i][j] = temp;
        // Your code goes here
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends