#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this-> data =d;
        this-> left = NULL;
        this-> right = NULL;
    }

};

node* buildTree(node* root){
    cout << "enter data " << endl;
    int data;
    cin>> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "enter data for inserting in left of "<< data << endl;
    root->left = buildTree(root->left);

    cout << "enter data for inserting in right of " << data <<  endl;
    root->right = buildTree(root -> right);

    return root;

}
int height(node* root){
    //base case
    if(root == NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;
    return ans;
}

bool isBalanced(node* root){
    //base case
    if(root == NULL){
        return true;
    }
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);

    bool diff = abs(height(root->left) - height(root->right)) <= 1;

    if (left && right && diff){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    node* root = NULL;

    //creating a tree

    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout << "checking balanced " << endl;

    cout << isBalanced(root);

    return 0;
}