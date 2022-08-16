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
    
    int n;
    cin >> n;
    
    while(n--){
        int x;
        cin >> x;
        insertAtTail(head,x);
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
    
    - improved creation : linked list 02


*/