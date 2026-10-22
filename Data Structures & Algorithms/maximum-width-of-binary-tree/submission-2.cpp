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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int width = 0;
        queue<pair<TreeNode*, int>> nodos;
        nodos.push({root, 0});
        while(!nodos.empty()){
            //Hallar el tamaño del nivel
            int levelNodes = nodos.size();
            // Posicion en el nivel es igual a 
            // posicion del último - posicion del primero +1
            width = max(width, nodos.back().second - nodos.front().second + 1);
            for(int i = 0; i < levelNodes; i++){
                TreeNode *curr = nodos.front().first;
                int posCurr = nodos.front().second;
                nodos.pop();
                if(curr->left != nullptr){
                    nodos.push({curr->left, 2*posCurr + 1});
                }
                if(curr->right != nullptr){
                    nodos.push({curr->right, 2*posCurr + 2});
                }
            }
        }
        return width;
    }
};
