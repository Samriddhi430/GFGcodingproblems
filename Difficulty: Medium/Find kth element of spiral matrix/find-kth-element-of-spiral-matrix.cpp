//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
        int startcol=0;
        int endcol=m-1;
        int startrow=0;
        int endrow=n-1;
        int count=1;
        while(count<=k){
            for(int i=startcol;i<=endcol;i++){
                if(count==k) return a[startrow][i];
                count++;
            }
            startrow++;
            for(int i=startrow;i<=endrow;i++){
                if(count==k) return a[i][endcol];
                count++;
            }
            endcol--;
            for(int i=endcol;i>=startcol;i--){
                if(count==k) return a[endrow][i];
                count++;
            }
            endrow--;
            for(int i=endrow;i>=startrow;i--){
                if(count==k) return a[i][startcol];
                count++;
            }
            startcol++;
        }
        return 0;
 		// Your code goes here.
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends