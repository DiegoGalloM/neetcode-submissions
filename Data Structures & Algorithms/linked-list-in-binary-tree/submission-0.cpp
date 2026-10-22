class Solution {
private:
    bool checkPath(ListNode* head, TreeNode* root) {
        if (head == nullptr) return true;
        if (root == nullptr) return false;
        if (head->val != root->val) return false;
        return checkPath(head->next, root->left) || checkPath(head->next, root->right);
    }

public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        // Si la lista está  vacía es cierto
        if (head == nullptr) return true;

        // Si el árbol es falso no hay forma 
        if (root == nullptr) return false;
        
        return checkPath(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};