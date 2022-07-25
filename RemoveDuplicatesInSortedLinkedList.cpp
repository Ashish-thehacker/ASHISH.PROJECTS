//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x; 
    next = NULL;
  }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends

//Function to remove duplicates from sorted linked list.

Node* removeDuplicates(Node *head)

{

   //using a pointer to iterate over linked list.

   struct Node* current = head;

    

    //traversing through the linked list.

    while (current->next != NULL)       

    {

        //if data at current node and next node are same, we store the node 

        //next to the next node of current node in link of current node.

        if (current->data == current->next->data)

           current->next = current->next->next;

           

        //else we just move the pointer to next node.

        else

           current = current->next; 

    }

    return head;

    

}
