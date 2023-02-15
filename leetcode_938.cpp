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
    int val=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root!=nullptr){
            val=rangeSumBST(root->left,low,high);
            if(((root->val)>=low) and (root->val<=high)){
                val=val+root->val;
            }
            val=rangeSumBST(root->right,low,high);
        }
        return val;
    }
};
int main()
{
    return 0;
}