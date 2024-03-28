//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        struct node* prev=NULL;
        struct node* curr=head;
        struct node* next=head->next;
        struct node* firstprev=NULL;
        struct node* temp=NULL;
        int cnt=0;
        while(curr!=NULL){
            if(cnt==0) temp=curr;
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
            if(cnt==k){
                cnt=0;
                if(firstprev==NULL){
                    firstprev=head;
                    head=prev;
                    prev=NULL;
                }
                else{
                    firstprev->next=prev;
                    firstprev=temp;
                    prev=NULL;
                }
            }
        }

//handling case when number of nodes is not multiple of k
        if(cnt!=0){
            firstprev->next=prev;
        }
        
        return head;
        // Complete this method
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverseIt(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends