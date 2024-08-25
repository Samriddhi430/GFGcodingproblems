//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        long long cnt=0;
        int i=0,j=0,b1=0,b2=0,b4=0;
        for(j=0;j<brr.size() && brr[j]<5;j++){
            if(brr[j]==1){
                b1++;
            }else if(brr[j]==2){
                b2++;
            }else if(brr[j]==4){
                b4++;
            }
        }
        for(i=0;i<arr.size() && arr[i]<4;i++){
            if(arr[i]==2){
                cnt+=(long long)(brr.size()-j+b1);
            }
            if(arr[i]==3){
                cnt+=(long long)(brr.size()-j+b1+b2+b4);
            }
        }
        while(i<arr.size() && j<brr.size()){
            if(arr[i]<brr[j]){
                
                cnt+=(long long)(brr.size()-j+b1);
                i++;
                
            }else{
                j++;
            }
        }
        cnt+=(long long)(arr.size()-i)*(long long)b1;
        return cnt;
        // Your Code goes here.
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends