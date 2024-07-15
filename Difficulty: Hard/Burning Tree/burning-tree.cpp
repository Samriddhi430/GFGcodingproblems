//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  Node* makenodetoparentmapping(Node* root,unordered_map<Node*,Node*>& parentmap,int target){
      queue<Node*> q;
      Node* targetnode=0;
      q.push(root);
      parentmap[root]=0;
      while(!q.empty()){
          Node* front=q.front();
          q.pop();
          if(front->data==target){
              targetnode=front;
          }
          if(front->left){
              q.push(front->left);
              parentmap[front->left]=front;
          }
          if(front->right){
              q.push(front->right);
              parentmap[front->right]=front;
          }
      }
      return targetnode;
  }
  int burnthetree(Node* targetnode,unordered_map<Node*,Node*>& parentmap){
      unordered_map<Node*,bool> isburnt;
      queue<Node*> q;
      int t=0;
      q.push(targetnode);
      isburnt[targetnode]=1;
      while(!q.empty()){
          int size=q.size();
          bool isfirespreaded=0;
          for(int i=0;i<size;++i){
              Node* front=q.front();
              q.pop();
              if(front->left && !isburnt[front->left]){
                  q.push(front->left);
                  isburnt[front->left]=1;
                  isfirespreaded=1;
              }
              if(front->right && !isburnt[front->right]){
                  q.push(front->right);
                  isburnt[front->right]=1;
                  isfirespreaded=1;
              }
              if(parentmap[front] && !isburnt[parentmap[front]]){
                  q.push(parentmap[front]);
                  isburnt[parentmap[front]]=1;
                  isfirespreaded=1;
              }
          }
          if(isfirespreaded) ++t;
      }  
      return t;
  }
    int minTime(Node* root, int target) 
    {
        unordered_map<Node*,Node*> parentmap;
        Node* targetnode= makenodetoparentmapping(root,parentmap,target);
        return burnthetree(targetnode,parentmap);
        // Your code goes here
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends