//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int first=0;
        int last=a.size()-1;
        int mid;
        while(first<last){
            mid=first+(last-first)/2;
            if(a[mid]>a[mid+1]){
                last=mid;
            }else{
                first=mid+1;
            }
        }
        
        return a[first];
        // Code here.
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends