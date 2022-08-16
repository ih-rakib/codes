
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
 
void insertAtTail(Node* &head, int val);
void insertAtHead(Node* &head, int val);
int countLength(Node * &head);
void display(Node *n);


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

int countLength(Node * &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
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
     
    int x,choice; 
    
    cout << "Choice 1 : Insertion at head\n";
    cout << "Choice 2 : Insertion at tail\n";
    cout << "Choice 0 : Exit\n";
    
    cout << "\nNext Choice : ";
    cin >> choice;
    
    while(choice != 0){ 
        cout << "Enter the value : ";
        cin >> x;
        
        switch(choice){
            case 1:
                insertAtHead(head,x); 
                break;
            case 2:
                insertAtTail(head,x); 
                break;
            default :
                break;
            
        } 
         
        cout << "Next Choice : ";
        cin >> choice;
    
    } 
    cout << "\nLinked List : \n";
    display(head); 
    cout << "\nLength of Linked List : " << countLength(head) << '\n';
    
    return 0; 
} 
 
 
/* 
 
    Linked List 03*
    
    Length of Linked List
    
 
*/ 
    