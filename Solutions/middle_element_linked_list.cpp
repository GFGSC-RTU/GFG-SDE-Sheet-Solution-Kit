#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
void create(struct node** temp,int val)
{
    struct node* newnode=new node;
    newnode->data=val;
    newnode->next=(*temp);
    (*temp)=newnode; 
}
void mid(struct node* head)
{
    int count=0;
    struct node* mid=head;
    struct node* temp=head;
    while(temp!=NULL)
    {
        if(count%2!=0)
        {
            mid=mid->next;
        }
        count++;
        temp=temp->next;
    }

    //to print the middle element
    if(mid!=NULL)
    {
        cout<<"The middle element is:"<<mid->data;
    }
}

int main()
{
    struct node* head=NULL;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        create(&head,arr[i]);
    }
    
    mid(head);
    return 0;
}