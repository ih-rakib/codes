#include<bits/stdc++.h>  
using namespace std;  
  
class doublyNode {  
    public :  
        int value;  
        doublyNode* next;  
        doublyNode* prev;
        
        // constructor creation  
        doublyNode(int val){  
            this->value = val;  
            next = NULL;  
            prev = NULL;
        }  
};  
  
void insertAtTail(doublyNode* &head, int val); 
void insertAtHead(doublyNode* &head, int val); 
int countLength(doublyNode * &head); 
void display(doublyNode *n);
void displayReverse(doublyNode* &head); 

void insertAtTail(doublyNode* &head, int val){ 
    doublyNode* newNode = new doublyNode(val); 
     
    if(head == NULL){ 
        head = newNode; 
        return; 
    } 
     
    doublyNode* temp = head; 
    while(temp->next!=NULL){ 
        temp = temp->next; 
    } 
    temp->next = newNode; 
    newNode->prev = temp;
} 

void insertAtHead(doublyNode* &head, int val){    
    // step 01 : creation of new node 
    doublyNode* newNode = new doublyNode(val); 
    // step 02 : update of newNode->next = head 
    newNode->next = head; 
    // step 03 : update of head->prev = newNode
    head->prev = newNode;
    // step 04 : update head 
    head = newNode; 
}

int countLength(doublyNode * &head){  
    doublyNode* temp = head;  
    int count = 0;  
    while(temp != NULL){  
        count++;  
        temp = temp->next;  
    }  
    return count;  
}  

void display(doublyNode *n){ 
    while(n != NULL){ 
        cout << n->value; 
        if(n->next != NULL){ 
            cout << " --> "; 
        } 
        n = n->next; 
    } 
    cout << '\n'; 
}
 
void displayReverse(doublyNode* &head){ 
    doublyNode* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    
    while(temp != NULL){ 
        cout << temp->value; 
        if(temp->prev != NULL){ 
            cout << " --> "; 
        } 
        temp = temp->prev; 
    } 
    cout << '\n'; 
}

 
int main(){  
    doublyNode* head = NULL;  
      
    int value,choice;  
     
    cout << "Choice 1 : Insertion at head\n"
         << "Choice 2 : Insertion at tail\n"
         << "Choice 3 : Reverse Print\n"
         << "Choice 666 : Display\n" 
         << "Choice 0 : Exit\n";
    
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
                displayReverse(head);
                break;
            case 666:
                display(head);
                break;
            default: 
                break; 
             
        }  
          
        cout << "Next Choice : "; 
        cin >> choice; 
     
    }  
    cout << "\nDoubly Linked List : \n"; 
    display(head);  
    cout << "\nLength of the Doubly Linked List : " << countLength(head) << '\n'; 
     
    return 0;  
}  
  
  
/*  
  
    Doubly Linked List
     
    
    
     
  
*/  
     
    