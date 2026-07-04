/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {

        // if (root == NULL)
        //     return NULL;
        // queue<Node*> q;
        // q.push(root);
        // while (!q.empty()) {
        //     int s = q.size();

        //     for (int i = 0; i < s; i++) {
        //           Node*node = q.front();
        //           q.pop();
        //           if(i<s-1){
        //             node->next = q.front();
        //           }
        //         if (node->left!=NULL)
        //             q.push(node->left);
        //         if (node->right != NULL)
        //             q.push(node->right);

        //     }

        // }
        // return root;

        // if (root == nullptr) return nullptr;

        // Node* current = root;

        // while (current != nullptr) {
        //     // Dummy node acts as the head of the next level's linked list
        //     Node dummy(0);
        //     Node* tail = &dummy;

        //     // Walk across the current level using next pointers
        //     while (current != nullptr) {
        //         if (current->left != nullptr) {
        //             tail->next = current->left;
        //             tail = tail->next;
        //         }
        //         if (current->right != nullptr) {
        //             tail->next = current->right;
        //             tail = tail->next;
        //         }
        //         current = current->next;
        //     }

        //     // Move down to the next level
        //     current = dummy.next;
        // }

        // return root;

        if (root == NULL) {
            return NULL;
        }
        queue<Node*> q;
        q.push(root);

       
        while (!q.empty()) {
            int n = q.size();

            for (int i = 0; i < n; i++) {
                Node* curr = q.front();
                q.pop();
                if (i < n - 1) {
                    curr->next = q.front();
                }
                if (curr->left != NULL) 
                    q.push(curr->left);
                
                if (curr->right != NULL) 
                    q.push(curr->right);
                
               
            }
        }
        return root;
    }
};
