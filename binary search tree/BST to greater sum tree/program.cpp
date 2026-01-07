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
void inorder(TreeNode* root) {
    if (!root)
        return;

    inorder(root->left);
    cout << root->val << "  ";
    inorder(root->right);
}
void solve(TreeNode* root,int &sum){
    if(!root)
        return;
    solve(root->right,sum);
    sum+=root->val;
    root->val=sum;
    solve(root->left,sum);
}
TreeNode* bstToGst(TreeNode* root) {
    int sum =0;
    solve(root,sum);
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
    cout << "Inorder before GST:  ";
    inorder(root);
    cout << endl;


    root = bstToGst(root);

    cout << "Inorder after GST:  ";
    inorder(root);
    cout << endl;

    return 0;
}
