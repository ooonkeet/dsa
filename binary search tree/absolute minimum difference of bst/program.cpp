#include <iostream>
using namespace std;
int minDiff=INT_MAX;
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

void inOrder(TreeNode* root, TreeNode* &prev){
    if(!root)
        return;
    inOrder(root->left,prev);
    if(prev!=NULL){
        minDiff=min(minDiff,root->val - prev->val);
    }
    prev=root;
    inOrder(root->right,prev);
}
int getMinimumDifference(TreeNode* root) {
    TreeNode *prev=NULL;
    inOrder(root,prev);
    return minDiff;
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
    cout << "Minimum Absolute Difference in BST = "<< getMinimumDifference(root) << endl;

    return 0;
}