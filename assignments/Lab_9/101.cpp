#include<bits/stdc++.h>
using namespace std;
/* (╯°□°)╯︵ ┻━┻ */

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    bool isMirror(TreeNode* l, TreeNode* r) {
        if (!l and !r) {
            return true;
        }
        if (!l or !r or l->val != r->val) {
            return false;
        }

        return isMirror(l->left, r->right) and isMirror(l->right, r->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) {
            return true;
        }

        return isMirror(root->left, root->right);
    }
};

int main() {

    return 0;
}