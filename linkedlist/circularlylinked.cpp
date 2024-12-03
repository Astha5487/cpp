#include<iostream>
using namespace std;


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