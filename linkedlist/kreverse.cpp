#include<iostream>
using namespace std;
Node* kReverse(Node* head, int k){
    //base call
    if(head == NULL){
        return NULL;
    }

    //step1 : rverse first k nodes
    Node* next= NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count =0;

    while(curr!== NULL && count <k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;

    }

    //step2: recursion dekh lega 
    if(next!= NULL){
        head-> next = kReversre(next, k);

    }

    //step3 : return head of reversed list

    return prev;
}
int main(){

}