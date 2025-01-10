#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {
    cout << "Enter data: ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new node(data);

    cout << "Enter data for inserting in left of " << data << ": ";
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << ": ";
    root->right = buildTree(root->right);

    return root;
}

vector<vector<int>> zigzagLevelOrder(node* root) {
    vector<vector<int>> result; 
    if (root == NULL) {
        return result;
    }
    queue<node*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int size = q.size();
        vector<int> ans(size);

        // Level processing
        for (int i = 0; i < size; i++) {
            node* frontNode = q.front();
            q.pop();

            // Calculate the index based on traversal direction
            int index = leftToRight ? i : size - i - 1;
            ans[index] = frontNode->data;

            if (frontNode->left)
                q.push(frontNode->left);

            if (frontNode->right)
                q.push(frontNode->right);
        }

        // Add the level to the result
        result.push_back(ans);

        // Change direction for the next level
        leftToRight = !leftToRight;
    }
    return result;
}

void printResult(const vector<vector<int>>& result) {
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    node* root = NULL;

    // Creating a tree
    root = buildTree(root);

    // Perform zigzag level order traversal
    vector<vector<int>> result = zigzagLevelOrder(root);

    // Print the result
    printResult(result);

    return 0;
}
