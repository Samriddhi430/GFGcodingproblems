//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  int check(int num)
    {
        for(int i = 2; i<=sqrt(num); i++)
        {
          if(num%i == 0) 
          return 0 ; 
        }
      return 1 ; 
    }
    vector<int> getPrimes(int n) {
          vector<int>ans;
         ans.push_back(-1);
         ans.push_back(-1);
         
        if(n<4)
        {
            return ans;
        }
        
       for(int i=2; i<=n/2; i++)
       {
           if(check(i) == 1 && check(n-i) == 1)
           {
               ans[0] = (i);
               ans[1]=(n-i);
               break;
           }
       }
        
        return ans;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends