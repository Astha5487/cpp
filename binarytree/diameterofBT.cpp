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

int diameter(node* root){
    //base case

    if(root==NULL){
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int answer = max(op1, max(op2, op3));

    return answer;
}


int main(){
    node* root = NULL;
    //creating a tree

    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout <<"diameter of tree " << endl;

    cout << diameter(root);

       return 0;
}
