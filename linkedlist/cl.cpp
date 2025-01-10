#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int data){
        this -> data = data;
        this ->next = NULL;
    }

    //destructor 
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this ->next = NULL;
        }
        cout << "memory free for node with this data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    // assuming element is present in list

    // empty list
    if(tail == NULL){
       Node* newNode = new Node(d);
       tail = newNode;
       newNode->next = newNode;
    }

    else{
        // non-empty list
        // assuming element is present in list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        // element is found curr representing element wala node

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }

}

void print(Node* tail){
    Node* temp = tail;

    do{
         cout<< tail ->data << " ";
         tail = tail->next;
    } while(tail != temp);
    cout<< endl;
}

void deleteNode(Node* &tail, int value){
    // empty list

    if(tail == NULL){
        cout<< "list is empty " << endl;
        return;
    }

    else{
        // non-empty

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 node ll
        if(curr == prev){
            tail = NULL;
        }

        // >=2 node ll
       else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* tail = NULL;

    //empty list me insert
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 8);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
}