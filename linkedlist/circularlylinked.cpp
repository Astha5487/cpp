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
        //memory freen
        if(this->next != NULL){
            delete next;
            this ->next = NULL;
        }
        cout << " memory free for node with this data " << value << endl;
    }
};

bool isCircularList(Node* head){
    //empty list
    if(head== NULL){
        return false;
    }

    Node* temp = head -> next;
    while(temp!= NULL && temp!=head){
        temp = temp->next;
    }

    if(temp== head){
        return true;

    }

    return false;
}

int main(){

    Node* tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);

    if(isCircularList(tail)){
        cout << " circular " << endl;
    }
    else{
        cout << " not circular " << endl;
    }

}