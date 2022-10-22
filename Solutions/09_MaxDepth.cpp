#include<iostream>
#include<queue>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int v){
        data = v;
        left = right = NULL;
    }
};

int maxdepth(node* root){    // by recrusion
    if(root == NULL){
        return 0;
    }

    int l = maxdepth(root->left);
    int r = maxdepth(root->right);

    return 1+max(l,r);
}

void  levelorder(node* root){  // by level order
    if(root == NULL){
        return;
    }

    queue<node*> q;
    int cnt=0;
    q.push(root);
    while(!q.empty()){
        vector<int> v;
        for(int i=0;i<q.size();i++)
        {
            
            node* n = q.front();
            q.pop();
            if(n->left != NULL){
                q.push(n->left);
            }
            if(n->right != NULL){
                q.push(n->right);
            }
            v.push_back(n->data);
        }
        
        cnt++;
    }
    cout<<cnt<<endl;

}

int main(){
    
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->left = new node(4);
    root->right->right = new node(6);
    root->right->left->left = new node(5);
//    root->right->left->left->right = new node(5);
 //  cout<<maxdepth(root);
    levelorder(root);

    return 0;
}