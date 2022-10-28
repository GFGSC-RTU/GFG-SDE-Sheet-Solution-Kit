/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    ListNode* p=A,*q=A;
    while(p)
    {
        p=p->next;
        if(p==NULL) return NULL;
        p=p->next;
        if(p==NULL) return NULL;
        q=q->next;
        if(p==q) break;
    }
    p=A;
    while(p!=q)
    {
        p=p->next;
        q=q->next;
    }
    return p;
}
