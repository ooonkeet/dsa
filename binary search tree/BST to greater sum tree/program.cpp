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
    cout << "BST before GST:  ";
    levelOrder(root);
    cout << endl;


    root = bstToGst(root);

    cout << "BST converted to GST:  ";
    levelOrder(root);
    cout << endl;

    return 0;
}
