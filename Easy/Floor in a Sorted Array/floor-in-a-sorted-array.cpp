//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        int low = 0, high = n - 1;
        int floorIndex = -1; // Initialize with -1 assuming no floor found
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // If current element is equal to x, then it is the floor of x
            if (v[mid] == x)
                return mid;
            
            // If current element is less than x, update floorIndex and search right half
            if (v[mid] < x) {
                floorIndex = mid;
                low = mid + 1;
            }
            // If current element is greater than x, search left half
            else
                high = mid - 1;
        }
        
        return floorIndex;
        
        // Your code here
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends