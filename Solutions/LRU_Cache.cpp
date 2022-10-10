//The approach is we define a doubly Linkedlist, and initialize two pointers head and tail
//If we want to add key , we add it near head and store it's address to hash so that we can retrieve in contant time
//And if get function called and it ask for value which is already present than that value is recent used value so we delete that value and add it near head, because in case when our cache is full but want to add key then in that case we delete the value which is least recent use which is present near tail.
//Our main idea is to store recent  values used near head pointer and not used value near tail pointer.

//Class for doubly Linkedlist
class Node{
    public:
      int key,value;
    Node* next;
    Node* prev;

    Node(){
        key=0,value=0;
        next=NULL;
        prev=NULL;
    }
    Node(int key,int value){
        this->key=key;
        this->value=value;
        next=NULL;
        prev=NULL;
    }
};
class LRUCache
{
    public:
    
    Node* head=new Node(0,0);
    Node* tail=new Node(0,0);
    int capacity;
    unordered_map<int,Node*> mp;
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int capacity) {
        this->capacity=capacity;
         head->next=tail;
         tail->prev=head;
    }
    // function to add key from back to front which is used recently
    void insert(int key,int value){
        Node* add=new Node(key,value);
        mp[key]=add;
        Node *temp=head->next;
        head->next=add;
        add->next=temp;
        add->prev=head;
        temp->prev=add;
    }
    // function to delete the node which is least recently used
    void deleteNode(Node *del){
        mp.erase(del->key);
        Node *p,*n;
        p=del->prev;
        n=del->next;
        p->next=n;
        n->prev=p;
    }
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if(mp.find(key)==mp.end()) return -1;
        int v=mp[key]->value;
        deleteNode(mp[key]);
        insert(key,v);
        return v;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value) {
        if(mp.find(key)==mp.end()){
            if(mp.size()==capacity)
                deleteNode(tail->prev); 
        }
        else{
            deleteNode(mp[key]);
        }
         insert(key,value);
    }
};
