
#include<bits/stdc++.h>


using namespace std;
// Breath First Search
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int> > v;
    if(root == NULL){
        return v;
    }
    
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> temp;
        int size = q.size();
        for(int i = 0; i < size; i++){
            Node* n = q.front();
            q.pop();
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);
            }
            temp.push_back(n->data);
        }
        v.push_back(temp);
    }
    return v;
}
void sumatKthlevel(Node* root, int k){
    if(root == NULL){
        return;
    }
    int cnt = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        
        int sum = 0;
        for(int i=0;i<q.size();i++){
            
            Node* n = q.front();
            q.pop();
            if(n->left != NULL){
                q.push(n->left);
            }
            if(n->right != NULL){
                q.push(n->right);
            }
            sum = sum + n->data;
            cout<<sum<<" ";
        }
        
    //    if(k == cnt){
//      cout<<sum<<endl;
  //      }

        cnt++;
 
    }
    
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3); 
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(10);
    root->left->left->right = new Node(9);
//    sumatKthlevel(root,1);
    vector<vector<int> > v =  levelOrder(root);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
    }
    return 0;
}