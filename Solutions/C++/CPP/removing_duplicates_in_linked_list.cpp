/* Removing duplicate from an unsorted list */
#include <iostream>

using namespace std;

typedef struct Node 
{
	int data;
	Node* next;
} Node;

bool createList(Node **head)
{
	*head = NULL;
	return true;
}

void addNode(Node **head, int n)
{
	Node *node = new Node();
	node->data = n;
	node->next = NULL;
	if(*head == NULL) {
		*head = node;
		return;
	}
	Node *cur = *head;
	while(cur) {
		if(cur->next == NULL) {
			cur->next = node;
			return;
		}
		cur = cur -> next;
	}
	return;
}

void deleteNode(Node **head, Node *node)
{
	Node *cur = *head;
	Node *prev = *head;
	if(node == *head) {
		if((*head)->next != NULL) {
			*head = (*head)->next;
		}
		return;
	}
	while(cur) {
		if(cur == node) {
			prev->next = cur->next;
			return;
		}
		prev = cur;
		cur = cur->next;
	}
}

/* No buffer allowed - neeed two pointers */
void removeDuplicateNode(Node **head)
{
	if((*head)->next == NULL) return;
	Node *cur = *head;
	Node *iter;
	while(cur) {
		iter = cur->next;
		while(iter) {
			if(cur->data == iter->data) {
				deleteNode(head, iter);
			}
			iter = iter->next;
		}
		cur = cur->next;
	}
	return;
}

void print(Node *head)
{
	Node *cur = head;
	while(cur) {
		cout << cur->data << " ";
		cur = cur->next;
	}
	cout << endl;
}

int main()
{
	Node *head;
	createList(&head;);
	addNode(&head;,10);
	addNode(&head;,30);
	addNode(&head;,40);
	addNode(&head;,50);
	addNode(&head;,20);
	addNode(&head;,30);
	addNode(&head;,70);
	addNode(&head;,20);
	addNode(&head;,30);
	addNode(&head;,90);

	print(head);
	removeDuplicateNode(&head;);
	print(head);
	return 0;
}
