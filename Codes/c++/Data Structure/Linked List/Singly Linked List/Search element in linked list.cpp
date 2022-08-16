
 
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
void insertionAtSpecificPosition(Node* &head, int val,int position); 
int searchByValueUnique(Node* &head,int val); 
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
 
void insertionAtSpecificPosition(Node* &head, int val,int pos){ 
    int i = 0; 
    Node* temp = head; 
    while(i<pos-2){ 
        temp = temp -> next; 
        i++; 
    } 
     
    Node* newNode = new Node(val); 
    newNode->next = temp->next; 
    temp->next = newNode; 
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
 
int searchByValueUnique(Node* &head,int key){ 
    Node* temp = head; 
    int count = 1; 
    if(temp==NULL){ 
        return -1; 
    } 
    while(temp->value != key){ 
        if(temp->next==NULL){ 
            return -1; 
        } 
        temp = temp->next; 
        count++; 
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
      
    int value,choice,position;  
     
    cout << "Choice 1 : Insertion at head\n"; 
    cout << "Choice 2 : Insertion at tail\n"; 
    cout << "Choice 3 : Insertion at specific position\n"; 
    cout << "Choice 4: Search a value(unique list)\n"; 
    cout << "Choice 0 : Exit\n"; 
     
    cout << "\nNext Choice : "; 
    cin >> choice; 
     
    while(choice != 0){         
        switch(choice){ 
            case 1: 
                cout << "Enter the value : "; 
            cin >> value; 
                insertAtHead(head,value);  
                break; 
            case 2: 
                cout << "Enter the value : "; 
                cin >> value; 
                insertAtTail(head,value);  
                break; 
            case 3: 
                cout << "Enter the value : "; 
                cin >> value; 
                cout << "Enter the desired position : "; 
                cin >> position; 
                insertionAtSpecificPosition(head,value,position); 
                break; 
            case 4: 
                cout << "Enter the value to search : "; 
                cin >> value; 
                position = searchByValueUnique(head,value); 
                if(position != -1){ 
                    cout << "The number is at position : " << position << '\n'; 
                }else { 
                    cout << "Element is not found\n"; 
                } 
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
     
    Search element in linked list 
     
  
*/  
     
