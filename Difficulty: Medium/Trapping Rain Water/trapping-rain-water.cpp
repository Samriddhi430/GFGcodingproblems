//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        if(n==0) return 0;
        int l=0, r=n-1;
        int leftmax=0, rightmax=0;
        long long watertrapped=0;
        while(l<r){
            if(arr[l]<arr[r]){
                if(arr[l]>=leftmax){
                    leftmax=arr[l];
                }else{
                    watertrapped+=leftmax-arr[l];
                }
                ++l;
            }else{
                if(arr[r]>=rightmax){
                    rightmax=arr[r];
                }else{
                    watertrapped+=rightmax-arr[r];
                }
                --r;
            }
        }
        return watertrapped;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends