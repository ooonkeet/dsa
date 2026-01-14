#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
TreeNode* insertBST(TreeNode* root, int val) {
    if (root == NULL)
        return new TreeNode(val);

    if (val < root->val)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);

    return root;
}
void inorder(TreeNode* root,vector<int> &vec){
    if(!root)
        return;
    inorder(root->left,vec);
    vec.push_back(root->val);
    inorder(root->right,vec);
}
void levelOrder(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        cout << curr->val << " ";

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

TreeNode* construct(int l,int r,vector<int> &vec){
    if(l>r)
        return NULL;
    int mid=l+(r-l)/2;
    TreeNode* root=new TreeNode(vec[mid]);
    root->left=construct(l,mid-1,vec);
    root->right=construct(mid+1,r,vec);
    return root;
}
int main() {
    TreeNode* root = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;


    for (int i = 0; i < n; i++) {
        cout << "Enter node value "<<i+1<< " :- ";
        cin >> value;
        root = insertBST(root, value);
    }
    vector<int>vec;
    inorder(root,vec);
    int l=0,r=vec.size()-1;
    root = construct(l,r,vec);
    cout << "Balanced Binary Search Tree:\n";
    levelOrder(root);
    return 0;
}