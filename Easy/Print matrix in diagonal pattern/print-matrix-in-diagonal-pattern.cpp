//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
  void fillGoingUp(vector<vector<int>> &mat, int n, vector<int> &v, int x, int y){
        for(int i = x, j = y; i >= y && j <= x; i--, j++){
            v.push_back(mat[i][j]);
        }
    }
    
    void fillGoingDown(vector<vector<int>> &mat, int n, vector<int> &v, int x, int y){
        for(int i = y, j = x; i <= x && j >= y; i++, j--){
            v.push_back(mat[i][j]);
        }
    }
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int n = mat.size();
        
        bool isDirectionUp = true;
        
        vector<int> v;
        
        for(int x = 0; x < n; x++){
            if(isDirectionUp){
                fillGoingUp(mat, n, v, x, 0);
            }else{
                fillGoingDown(mat, n, v, x, 0);
            }
            
            isDirectionUp = !isDirectionUp;
        }
        
        for(int y = 1; y < n; y++){
            if(isDirectionUp){
                fillGoingUp(mat, n, v, n - 1, y);
            }else{
                fillGoingDown(mat, n, v, n - 1, y);
            }
            
            isDirectionUp = !isDirectionUp;
        }
        
        return v;
    }
         //Your code here
    
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends