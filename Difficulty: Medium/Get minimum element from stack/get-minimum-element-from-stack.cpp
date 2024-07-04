//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    stack<int>test;
    public:
    
       /*returns min element from stack*/
      int getMin(){
           if( test.size()==0)
           {
               return -1;
           }
           return test.top();
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
          
          if(s.empty())
          return -1;
          if(s.top() == test.top())
          {
              int pop_ele;
              pop_ele=s.top();
              s.pop();
              test.pop();
              return pop_ele; 
              
          }
          else
          {
              int pop_ele;
              pop_ele=s.top();
              s.pop();
              return pop_ele;
              
          }
          
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.size()==0)
           {
               s.push(x);
               test.push(x);
           }
           else if(x <= test.top())
           {
               s.push(x);
               test.push(x);
           }
           else
           {
               s.push(x);
           }
           
           
           //Write your code here
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends