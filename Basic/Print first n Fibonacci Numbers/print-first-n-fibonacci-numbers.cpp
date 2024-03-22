//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> fibNumbers;
        
        long long n1 = 1, n2 = 0, n3;
        for (long long i = 0; i < n; i++) {
            n3 = n1 + n2;
            fibNumbers.push_back(n3);
            n1 = n2;
            n2 = n3;
        }
        
        return fibNumbers;
        //code here
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends