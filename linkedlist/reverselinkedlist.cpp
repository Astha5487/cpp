#include <iostream>
using namespace std;

void reverse(Node* &head, Node* curr, Node* prev){

    //base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr-> next;
    reverse(head, forward, curr);
    curr-> next = prev;
    


}

Node* reverseLinkedList(Node *head){

    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head; 
/*
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head; 
    Node* forward = NULL;

    while(curr!= NULL){
        forward = curr -> next;
        curr-> next = prev;
        prev = curr;
        curr = forward;

    }
    return prev;
    */
}

int main (){

}