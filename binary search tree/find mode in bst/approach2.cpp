#include <bits/stdc++.h>
using namespace std;
int currNum=0;
int currFreq=0;
int maxFreq=0;
vector<int>result;
unordered_map<int,int>mp;
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
void dfs(TreeNode* root){
    if(!root) //root=Null
        return;
    dfs(root->left);
    if(root->val==currNum){
        currFreq++;
    }else{
        currNum=root->val;
        currFreq=1;
    }
    if(currFreq>maxFreq){
        result={};
        maxFreq=currFreq;
    }
    if(currFreq==maxFreq)
        result.push_back(root->val);
    dfs(root->right);
}
vector<int> findMode(TreeNode* root) {
    dfs(root);
    return result;
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
    vector<int> result = findMode(root);
    cout<<"Modal elements are: ";
    for (int x : result) {
        cout<<x<<" ";
    }
    return 0;
}
