#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *insertAtTail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}

Node *sortList(Node *head)
{
    // Write your code here.
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {
        int val = curr->data;
        if (val == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (val == 1)
        {
            insertAtTail(oneTail
                             curr);
        }
        else if (val == 2)
        {
            insertAtTail(twoTail
                             curr);
        }
        curr = curr->next;
    }

    // now merge the 3 linked list which we have created
    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}