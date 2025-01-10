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

void insertAtHead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

void print(Node* head){
    Node* temp = head;

    while(temp!= NULL){
        cout << temp -> data << " ";
        temp = temp->next;
    }
     cout << endl;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);

    tail ->next =temp;
    tail = temp;

}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at starting position 
    if(position ==1 ){
        insertAtHead(head , d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
   // inserting at last position 
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d;

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp ->next;
    temp ->next = nodeToInsert;

}

void deleteNode(int position, Node* &head){
    // deleting start node
    if(position ==1 ){
        Node* temp = head;
        head = head->next;
        // memory free
        temp -> next = NULL;
        delete temp;
    }

    else{
        //middle or last
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev->next = curr -> next;

        curr->next = NULL;
        delete curr;
    }

    
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;

    Node* tail = node1;

     print(head);
    //insertAtHead(head, 12);

    
     insertAtTail(tail, 12);
      print(head);
  

     insertAtTail(tail, 15);
      print(head);

      insertAtPosition(tail, head, 4, 22);

      print(head);

      cout << "head " << head->data << endl;
      cout << "tail " << tail->data << endl;
      

      deleteNode(4, head);
      print(head);

      cout << "head " << head->data << endl;
      cout << "tail " << tail->data << endl;
      
  return 0;

}