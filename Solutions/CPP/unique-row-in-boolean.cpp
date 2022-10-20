class Trie{
    public:
    Trie *child[2]={0};
    bool endOfWord;
};
void insert(Trie *root, vector<int> &a) {
    Trie *p=root;
    for(auto x: a) {
        int ind=x;
        if(p->child[ind]==0) p->child[ind]=new Trie();
        p=p->child[ind];
    }
    p->endOfWord=1;
}
bool search(Trie *root, vector<int> &a) {
    Trie *p=root;
    for(auto x: a) {
        int ind=x;
        if(p->child[ind]==0) return 0;
        p=p->child[ind];
    }
    return p!=0 && p->endOfWord==1;
}
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col) {
    vector<vector<int>> ans;
    vector<vector<int>> a;
    for(int i=0;i<row;i++) {
        vector<int> temp;
        for(int j=0;j<col;j++) {
            temp.push_back(M[i][j]);
        }
        a.push_back(temp);
    }
    Trie *root=new Trie();
    for(int i=0;i<row;i++) {
        if(search(root, a[i])==0) ans.push_back(a[i]);
        insert(root, a[i]);
    }
    return ans;
}