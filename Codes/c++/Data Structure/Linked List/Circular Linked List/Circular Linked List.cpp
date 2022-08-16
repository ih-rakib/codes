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
 
struct Test{ 
    int position[1000]; 
}; 
   
void insertAtTail(Node* &head, int val);  
void insertAtHead(Node* &head, int val);  
int countLength(Node * &head);  
void deletionAtHead(Node* &head); 
void deletionAtTail(Node* &head); 
void display(Node *n);  
  
  
void insertAtTail(Node* &head, int val){   
    Node* newNode = new Node(val);   
       
    if(head == NULL){   
        head = newNode;   
        newNode->next = head;
        return;   
    }   
       
    Node* temp = head;   
    while(temp->next!=head){   
        temp = temp->next;   
    }   
    newNode->next = head; // newNode->next = temp->next
    temp->next = newNode;   
}   
   
void insertAtHead(Node* &head, int val){  
    // step 01 : creation of new node   
    Node* newNode = new Node(val); 
    if(head == NULL){   
        head = newNode;   
        newNode->next = head;
        return;   
    }   
       
    // step 02 : update of newNode->next = head   
    newNode->next = head;   
    // step 03 : update the tail with new head
    Node* temp = head;
    while(temp->next!=head){   
        temp = temp->next;   
    }   
    temp->next = newNode;
    // step 04 : update head   
    head = newNode;   
}   
 
int countLength(Node * &head){  
    Node* temp = head;  
    int count = 0;  
    do{  
        count++;  
        temp = temp->next;  
    }while(temp != head);
    
    return count;  
}  
 
void deletionAtHead(Node* &head){ 
    Node* temp = head; 
    if(temp != NULL){ 
        Node* delNode = temp;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = delNode->next;
        head = delNode->next;
        delete delNode;
    }else { 
        cout << "There is no value in Head!\n"; 
    } 
} 
 
void deletionAtTail(Node* &head){ 
    Node* temp = head; 
    if(temp != NULL and temp->next !=head){ 
        while(temp->next->next != head){ 
            temp = temp -> next; 
        } 
        Node* delNode = temp -> next; 
        temp->next = delNode->next; 
        delete delNode; 
    }else { 
        // Head is NULL 
        if(temp==NULL) 
            cout << "There is no value yet!\n"; 
        // Head is Tail 
        else  
            deletionAtHead(head); 
    } 
} 
 
void display(Node *head){  
    if(head==NULL){
        cout << "The LL is empty\\n";
        return;
    } 
    Node* temp = head;
    do{   
        cout << temp->value;  
        temp = temp->next;   
        if(temp != head){   
            cout << " -> ";   
        }    
    }while(temp != head); 
    cout << '\n';  
}   
   
int main(){   
    Node* head = NULL;   
       
    int value,choice,position;   
      
    cout << "Choice 1 : Insertion at head\n" 
         << "Choice 2 : Insertion at tail\n" 
         << "Choice 3 : Deletion At Head\n" 
         << "Choice 4 : Deletion At Tail\n" 
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
                deletionAtHead(head); 
                break; 
            case 4: 
                deletionAtTail(head); 
                break; 
   
            case 666: 
                display(head); 
                break; 
            default:  
                break;  
              
        }   
           
        cout << "\nNext Choice : ";  
        cin >> choice;  
      
    }   
    cout << "\nLinked List : \n";  
    display(head);   
    cout << "\nLength of Linked List : " << countLength(head) << '\n';  
      
    return 0;   
}   
   
   
/*   
   
    Circular Linked List
      
    
     
      
   
*/   
      
     
    