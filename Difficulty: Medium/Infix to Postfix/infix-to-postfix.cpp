//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int precedence(char op){
      if(op=='+' || op=='-') return 1;
      if(op=='*' || op=='/') return 2;
      if(op=='^') return 3;
      return 0;
  }
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        stack<char> opr;
        string postfix;
        for(char ch: s){
            if(isalnum(ch)){
                postfix+=ch;
            }else if(ch=='('){
                opr.push(ch);
            }else if(ch==')'){
                while(!opr.empty() && opr.top()!='('){
                    postfix+=opr.top();
                    opr.pop();
                }
                if(!opr.empty() && opr.top()=='('){
                    opr.pop();
                }
            }else{
                while(!opr.empty() && precedence(opr.top())>=precedence(ch)){
                    postfix+=opr.top();
                    opr.pop();
                }
                opr.push(ch);
            }
        }
        while(!opr.empty()){
            postfix+=opr.top();
            opr.pop();
            
        }
        // Your code here
        return postfix;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends