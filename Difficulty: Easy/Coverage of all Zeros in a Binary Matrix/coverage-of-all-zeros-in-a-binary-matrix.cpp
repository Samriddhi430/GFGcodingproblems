//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 1){
                    continue;
                }
                //Left
                if(j-1>=0 && matrix[i][j-1] == 1) count++;
                
                //Right 
                if(j+1<m && matrix[i][j+1] == 1) count++;
                
                //Up
                if(i-1>=0 && matrix[i-1][j] == 1) count++;
                
                //Down
                if(i+1<n && matrix[i+1][j] == 1) count++;
            }
        }
        return count;
        // Code here
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends