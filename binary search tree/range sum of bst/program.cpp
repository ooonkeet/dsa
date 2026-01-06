#include <iostream>
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
int rangeSumBST(TreeNode* root, int low, int high) {
    if (root == NULL)
        return 0;

    if (root->val >= low && root->val <= high) {
        return root->val
             + rangeSumBST(root->left, low, high)
             + rangeSumBST(root->right, low, high);
    }

    if (root->val < low)
        return rangeSumBST(root->right, low, high);

    return rangeSumBST(root->left, low, high);
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

    int low, high;
    cout << "Enter lower bound for search: ";
    cin >> low ;
    cout << "Enter higher bound for search: ";
    cin>> high;

    cout << "Range Sum in BST = "<< rangeSumBST(root, low, high) << endl;

    return 0;
}