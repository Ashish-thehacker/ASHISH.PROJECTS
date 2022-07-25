// { Driver Code Starts
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

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(head == NULL){
            return NULL;
        }
        // reverse first k nodes
        int count = 0;
        node * current = head ;
        node * previous = NULL;
        node * next = NULL;
        while(current != NULL && count<k)
        {
            next = current -> next; // current ke next ko humne next se replace kar diya
            current -> next = previous; // current ke next ko humne previous ki taraf mod diya
            previous = current;// previous ++
            current = next;// current ++
            count++;
        }
        // recursion aageka  dekhlega
        if(next!=NULL)
        {
            head -> next = reverse(next,k); // yaane reverse function ko aage ke liye move karayenge
        }
       
        return previous;
    }
};


// { Driver Code Starts.

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
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends