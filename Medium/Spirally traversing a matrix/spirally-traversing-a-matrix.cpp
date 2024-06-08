//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        int row = 0, col = 0, idx = 0, k;
        while(row<r && col<c) {
            // Traverse left to right
            for(k = col; k<c; k++)
                // ans[idx++] = matrix[row][k];
                ans.push_back(matrix[row][k]);
            row++;
            
            // Traverse top to bottom
            for(k=row; k<r; k++)
                // ans[idx++] = matrix[k][c-1];
                ans.push_back(matrix[k][c-1]);
            c--;
            
            // Exit loop if traversed all elements
            if(row == r || col == c)
                break;
                
            // Traverse right to left
            for(k=c-1; k>=col; k--)
                // ans[idx++] = matrix[r-1][k];
                ans.push_back(matrix[r-1][k]);
            r--;
            
            // Traverse bottom to top
            for(k=r-1; k>=row; k--)
                // ans[idx++] = matrix[k][col];
                ans.push_back(matrix[k][col]);
            col++;
        }
        return ans;
    }
        // code here 
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends