/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int level = 0;
        queue<TreeNode*> nodes;
        nodes.push(root);
        while(!nodes.empty()){
            level++;
            //Necesito obtener el tamaño del nivel para recorrer los elementos
            int levelSize = nodes.size();
            for(int i = 0; i < levelSize; i++){
                TreeNode *curr = nodes.front();
                nodes.pop();
                if(curr->left != nullptr){
                    nodes.push(curr->left);
                }
                if(curr->right != nullptr){
                    nodes.push(curr->right);
                }
            }

        }
        return level;
    }
};
