#include<iostream>
using namespace std;

Node* reverse1(Node* head){
    //base case
       if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* chotaHead= reverse1(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return chotaHead;

}

Node* reverseLinkedList(Node *head)
{
    return reverse1(head);

}
int main(){


}