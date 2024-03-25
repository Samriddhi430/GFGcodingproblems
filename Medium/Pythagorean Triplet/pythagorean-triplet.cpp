//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    int maxEle=arr[0],a,b,c,d;
        for(int i=0;i<n;i++){
            maxEle=max(maxEle,arr[i]);
        }
        int count[maxEle+1];
        for(int i=0;i<=maxEle;i++){
            count[i]=0;
        }
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        for(int i=0;i<=maxEle;i++){
            for(int j=0;j<=maxEle;j++){
                if(count[i]>0 && count[j]>0){
                    a=i*i;
                    b=j*j;
                    c=a+b;
                    d=sqrt(c);
                    if((d*d)==c && d<=maxEle && count[d]>0){
                        return true;
                    }
                    
                }
            }
        }
        return false;
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends