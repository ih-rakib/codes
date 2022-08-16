#include<bits/stdc++.h>
using namespace std;

class Node {
    public :
        int value;
        Node* next;
        
        // constructor creation
        Node(int val){
            value = val;
            next = NULL;
        }
};

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);
    
    if(head == NULL){
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtHead(Node* &head, int val){   
    // step 01 : creation of new node
    Node* newNode = new Node(val);
    // step 02 : update of newNode->next = head
    newNode->next = head;
    // step 03 : update head
    head = newNode;
}

void display(Node *n){
    while(n != NULL){
        cout << n->value;
        if(n->next != NULL){
            cout << " -> ";
        }
        n = n->next;
    }
    cout << '\n';
}

int main(){
    Node* head = NULL;
    
    int n,p=1;
    cin >> n;
    
    while(n--){
        int x;
        char c; // f : first, h : head, t : tail
        cout << "value : choice(f/h/t) : ";
        cin >> x >> c;
        
        if(c=='f'){
            insertAtTail(head,x);
        }else if(c=='h'){
            insertAtHead(head,x);
        }else if(c=='t'){
            insertAtTail(head,x);
        }else {
            cout << "Invalid Input\n";
        }
    }
    
    // insertAtTail(head,1);
    // insertAtTail(head,5);
    // insertAtTail(head,8);
    // insertAtTail(head,9);
    
    // Node* second = new Node();
    // Node* third = new Node();
    // Node* fourth = new Node();
    
    // head -> value = 1;
    // second -> value = 5;
    // third -> value = 8;
    // fourth -> value = 9;
    
    // head -> next = second;
    // second -> next = third;
    // third -> next = fourth;
    // fourth -> next = NULL;
    
    display(head);
    
    return 0;
}


/*

    Linked List 02
    
    - insert at head/tail : linked list 02


*/