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
void insertionAtSpecificPosition(Node* &head, int val,int position); 
int searchByValueUnique(Node* &head,int val); 
void searchByValueDuplicate(Node* &head,int key);
//Test searchByValueDuplicateReturn(Node* &head,int key);
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

void searchByValueDuplicate(Node* &head,int key){
    Node* temp = head; 
    int count = 1,flag = 0,k = 1; 
    int size = countLength(head);
    int position[size+1];
    while(temp != NULL){
        if(temp->value==key){
            position[k] = count; 
            flag = 1;
            k++;
        }
        count++;
        temp = temp->next;
    }
    
    if(flag == 0){
        cout << "Element is not found\n";
    }else {
        position[0] = k;
        cout << "The value is found at Position : ";
        for(int i=1;i<position[0];++i){
            cout << position[i];
            if(i<position[0]-1) cout << ',';
        }
        cout << '\n';
    }
}
  
Test searchByValueDuplicateReturn(Node* &head,int key){
    Node* temp = head; 
    int count = 1,k = 1; 
    Test T;
    while(temp != NULL){
        if(temp->value==key){
            T.position[k] = count;
            k++;
        }
        count++;
        temp = temp->next;
    }
    T.position[0] = k;
    return T;
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
    cout << "Choice 4 : Search a value(unique list)\n"; 
    cout << "Choice 5 : Search a value(duplicate enabled list)\n"; 
    cout << "Choice 6 : Search a value(duplicate enabled list- return)\n"; 
    cout << "Choice 666 : Display\n"; 
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
            case 5: 
                cout << "Enter the value to search : "; 
                cin >> value; 
                searchByValueDuplicate(head,value); 
                break; 
            case 6: 
                cout << "Enter the value to search : "; 
                cin >> value; 
                Test T;
                T = searchByValueDuplicateReturn(head,value); 
                if(T.position[0]==1){
                    cout << "Element Not Found\n";
                }else {
                    int size = T.position[0];
                    cout << "The number is at position : ";
                    for(int i=1;i<size;++i){
                        cout << T.position[i];
                        if(i<size-1){
                            cout << ", ";
                        }
                    }
                    cout << '\n';
                }
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
    cout << "\nLinked List : \n"; 
    display(head);  
    cout << "\nLength of Linked List : " << countLength(head) << '\n'; 
     
    return 0;  
}  
  
  
/*  
  
    Linked List 03* 
     
    Search element in linked list(duplicate)(return in main)
    - Duplicate Enabled
     
  
*/  
     
    