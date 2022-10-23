//Problem link-https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/



//Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
// (i) a next pointer to the next node,
// (ii) a bottom pointer to a linked list where this node is head.
// Each of the sub-linked-list is in sorted order.
// Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order. 
// Note: The flattened list will be printed using the bottom pointer instead of next pointer. For more clearity have a look at the printList() function in the driver code.



Node* merge(Node* head1,Node *head2)
{
   if(head1==0)return head2;
   if(head2==0)return head1;
   
   Node* res;
   
   if(head1->data<=head2->data)
   {
       res=head1;
       res->bottom=merge(head1->bottom,head2);
   }
   else
   {
       res=head2;
       res->bottom=merge(head1,head2->bottom);
   }
   
   res->next=NULL;
   
   return res;
}

Node *flatten(Node *root)
{
  // Your code here
  if(root==0 || root->next==0)
       return root;
   
   return merge(root,flatten(root->next));
  
}
