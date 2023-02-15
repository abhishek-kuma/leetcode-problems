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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode *newnode=new TreeNode;
        if(root1==nullptr){
            return root2;
        }
        if(root2==nullptr){
            return root1;
        }
        if(root1!=nullptr or root2!= nullptr){
            if(root1!=nullptr and root2!=nullptr){
                newnode->val=(root1->val)+(root2->val);
            }
            else if(root1!=nullptr and root2==nullptr){
                newnode->val=root1->val;
            }
            else if(root1==nullptr and root2!=nullptr){
                newnode->val=root2->val;
            }
            newnode->left=mergeTrees(root1->left,root2->left);
            newnode->right =mergeTrees(root1->right,root2->right);
        }
        return newnode;
    }
};
int main()
{
    return 0;
}