
#include <bits/stdc++.h>
using namespace std;
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
    mp[root->val]++;
    dfs(root->right);
}
vector<int> findMode(TreeNode* root) {
    dfs(root);
    vector<int> result;
    int maxFreq=0;
    for(auto &it:mp){
        if(it.second>maxFreq){
            maxFreq=it.second;
            result={};
            result.push_back(it.first);
        }else if(it.second==maxFreq)
            result.push_back(it.first);
    }
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
