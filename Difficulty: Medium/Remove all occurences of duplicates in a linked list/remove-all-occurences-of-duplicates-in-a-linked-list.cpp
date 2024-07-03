//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        if(head==NULL) return NULL;
        Node* prevnode=head;
        Node* currnode=head;
        while(currnode!=NULL && currnode->next!=NULL){
            Node* nextnode=currnode->next;
            if(currnode->data !=nextnode->data){
                prevnode=currnode;
                currnode=nextnode;
                
            }else{
                int val=currnode->data;
                if(currnode==head){
                    while(head!=NULL && head->data==val){
                        head=head->next;
                    }
                    currnode=head;
                    prevnode=head;
                }else{
                    while(currnode!=NULL && currnode->data==val){
                        currnode=currnode->next;
                    }
                    prevnode->next=currnode;
                }
            }
        }
        return head;
        
        // code here
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends