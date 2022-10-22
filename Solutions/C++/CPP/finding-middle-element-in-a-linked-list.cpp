https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node*slow=head;
        Node*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
};
