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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr){
            return ans;
        }

        queue<TreeNode*> nodos;
        nodos.push(root);
        while(!nodos.empty()){
            vector<int> nivel;
            int levelSize = nodos.size();
            for(int i = 0; i < levelSize; i++){
                TreeNode *curr = nodos.front();
                nodos.pop();
                nivel.push_back(curr->val);
                //Guardar los hijos
                if(curr->left != nullptr){
                    nodos.push(curr->left);
                }
                if(curr->right != nullptr){
                    nodos.push(curr->right);
                }
            }
            // Revisar que el vector no esté vacío
            if(!nivel.empty()){
                ans.push_back(nivel);
            }
        }
        return ans;
    }
};
