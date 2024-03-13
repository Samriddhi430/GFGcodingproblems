//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
         sort(A, A + n);

        // Fix the first element and use two pointers approach for the remaining elements.
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = A[i] + A[left] + A[right];
                
                if (sum == X) {
                    // Triplet found.
                    return true;
                } else if (sum < X) {
                    // Increase the sum by moving the left pointer to the right.
                    left++;
                } else {
                    // Decrease the sum by moving the right pointer to the left.
                    right--;
                }
            }
        }
        
        // No triplet found.
        return false;
    }
        //Your Code Here
    

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends