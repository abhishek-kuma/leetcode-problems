#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    bool check=false;
    TreeNode* traversal(TreeNode *root,int val){
        if(check==true){
            return root;
        }
        if(root==nullptr){
            return root;
        }
        else if(root->val==val){
            check=true;
            return root;
        }
        else if(root->val>val){
            traversal(root->left,val);
        }
        else{
            traversal(root->right,val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode * ptr=nullptr;
        if(check==false){
            return ptr;
        }
        return traversal(root,val);
    }
};
int main()
{
    return 0;
}