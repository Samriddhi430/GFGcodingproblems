//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
         auto onSegment = [](int p[], int q[], int r[]) {
            if (q[0] <= max(p[0], r[0]) && q[0] >= min(p[0], r[0]) &&
                q[1] <= max(p[1], r[1]) && q[1] >= min(p[1], r[1])) {
                return true;
            }
            return false;
        };
         auto orientation = [](int p[], int q[], int r[]) {
            long long val = (long long)(q[1] - p[1]) * (r[0] - q[0]) - (long long)(q[0] - p[0]) * (r[1] - q[1]);
            if (val == 0) return 0;  // collinear
            return (val > 0) ? 1 : 2; 
        };

        
        int o1 = orientation(p1, q1, p2);
        int o2 = orientation(p1, q1, q2);
        int o3 = orientation(p2, q2, p1);
        int o4 = orientation(p2, q2, q1);

        // General case
        if (o1 != o2 && o3 != o4) {
            return "true";
        }


        if (o1 == 0 && onSegment(p1, p2, q1)) {
            return "true";
        }

        if (o2 == 0 && onSegment(p1, q2, q1)) {
            return "true";
        }

      
        if (o3 == 0 && onSegment(p2, p1, q2)) {
            return "true";
        }

  
        if (o4 == 0 && onSegment(p2, q1, q2)) {
            return "true";
        }

        return "false";
    }
};
        // code here
    

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1[2], q1[2], p2[2], q2[2];
        cin >> p1[0] >> p1[1] >> q1[0] >> q1[1] >> p2[0] >> p2[1] >> q2[0] >> q2[1];
        // if (q2[1] == -2) {
        //     cout << "true" << endl;
        //     return 0;
        // }
        Solution ob;
        // int a = ob.doIntersect(p1, q1, p2, q2);
        // if (a)
        cout << ob.doIntersect(p1, q1, p2, q2) << "\n";
    }
}
// } Driver Code Ends