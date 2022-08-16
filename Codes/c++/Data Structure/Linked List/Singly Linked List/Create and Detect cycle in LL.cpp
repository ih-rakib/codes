
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
Test searchByValueDuplicateReturn(Node* &head,int key); 
void insertionAfterSpecificValue(Node* &head,int searchValue,int value); 
void deletionAtHead(Node* &head); 
void deletionAtTail(Node* &head); 
void deleteAtSpecificPosition(Node* &head,int position); 
void deletionByValueUnique(Node* &head,int value); 
Node* deletionByValueDuplicate(Node* &head,int key); 
Node* reverseIteratively(Node* &head); 
Node* reverseRecursively(Node* &head);
int findMid(Node* &head); 
void createCycle(Node* &head,int pos);
bool detectCycle(Node* &head);
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
            if(i<position[0]-1) cout << ", "; 
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
 
void insertionAfterSpecificValue(Node* &head,int searchValue,int value){ 
    // step 01 : search position  
    int position; 
    position = searchByValueUnique(head,searchValue); 
    // step 02 : insert after position  
    insertionAtSpecificPosition(head,value,position+1); 
} 
 
void deletionAtHead(Node* &head){ 
    Node* temp = head; 
    if(temp != NULL){ 
        head = temp->next; 
        delete temp; 
    }else { 
        cout << "There is no value in Head!\n"; 
    } 
} 
 
void deletionAtTail(Node* &head){ 
    Node* temp = head; 
    if(temp != NULL and temp->next !=NULL){ 
        while(temp->next->next != NULL){ 
            temp = temp -> next; 
        } 
        Node* delNode = temp -> next; 
        temp->next = NULL; 
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
 
void deleteAtSpecificPosition(Node* &head,int position){ 
    Node* temp = head; 
    int i=1; 
     
    if(position <= countLength(head)){ 
        if(position == 1){ 
            deletionAtHead(head); 
        }else if(position == countLength(head)){ 
            deletionAtTail(head); 
        }else { 
            while(i<position-1){ 
                temp = temp->next; 
                i++; 
            } 
            Node* delNode = temp->next; 
            temp->next = delNode->next; 
            delete delNode; 
        } 
    }else { 
          cout << "Position is out of bound\n"; 
    } 
} 
 
void deletionByValueUnique(Node* &head,int value){ 
    // find the position of the value 
    int position = searchByValueUnique(head,value); 
    // deletion at specific position  
    if(position == -1){ 
        cout << "Value not found in the Linked List!\n"; 
    }else { 
        deleteAtSpecificPosition(head,position); 
    } 
} 
 
Node* deletionByValueDuplicate(Node* &head,int key){ 
    Node* cur = head; 
    Node* prev = NULL; 
     
    if(head == NULL) return head; 
    while(cur){ 
        if(cur->value==key){ 
            if(prev==NULL){ 
                head = cur->next; 
            } 
            else { 
                prev->next = cur->next; 
            } 
        }else { 
            prev = cur; 
        } 
        cur = cur->next; 
    } 
    return head; 
} 
 
Node* reverseIteratively(Node* &head){ 
    Node* prev = NULL; 
    Node* cur = head; 
    Node* nxt = NULL; 
     
    if(head==NULL){ 
        cout << "The Linked List is empty\n"; 
        return head; 
    } 
    while(cur !=NULL){ 
        nxt = cur->next; 
        cur->next = prev; 
        prev = cur; 
        cur = nxt; 
    } 
    head = prev; 
    return head; 
} 
 
Node* reverseRecursively(Node* &head){ 
    if(head==NULL or head->next==NULL){ 
        return head; 
    } 
    Node* newHead = reverseRecursively(head->next); 
    Node* headNext = head->next; 
    headNext->next = head; 
    head->next = NULL; 
    return newHead; 
} 

int findMid(Node* &head){
    // Case 1 : LL is empty
    if(head == NULL) 
        return -1;
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->value;
}

void createCycle(Node* &head,int pos){
    Node* temp = head;
    Node* startNode;
    int count = 1;
    
    while(temp->next!=NULL){
        temp = temp->next;
        count++;
        
        if(count==pos){
            startNode = temp;
        }
    }
    
    temp->next = startNode;
}

bool detectCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        // detect here
        if(slow->next==fast->next)
            return true;
    }
    return false;
    
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
      
    cout << "Choice 1 : Insertion at head\n" 
         << "Choice 2 : Insertion at tail\n" 
         << "Choice 3 : Insertion at specific position\n"  
         << "Choice 4 : Search a value(unique list)\n"  
         << "Choice 5 : Search a value(duplicate enabled list)\n"  
         << "Choice 6 : Search a value(duplicate enabled list- return)\n"  
         << "Choice 7 : InsertionAfterSpecificValue\n" 
         << "Choice 8 : Deletion At Head\n" 
         << "Choice 9 : Deletion At Tail\n" 
         << "Choice 10 : Deletion At Specific Position\n" 
         << "Choice 11 : Deletion by Value(unique list)\n" 
         << "Choice 12 : Deletion by Value(duplicate list)\n" 
         << "Choice 13 : Reverse Linked List (Iterative)\n" 
         << "Choice 14 : Reverse Linked List (Recursive)\n" 
         << "Choice 15 : Find mid value(slow-fast pointer method)\n"  
         << "Choice 16 : Create Cycle in the LL\n"
         << "Choice 17 : Detect Cycle from the LL\n"
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
            case 7: 
                cout << "Enter the value to search : "; 
                int searchValue; 
                cin >> searchValue; 
                cout << "Enter the value to insert : "; 
                cin >> value; 
                insertionAfterSpecificValue(head,searchValue,value); 
                break; 
            case 8: 
                deletionAtHead(head); 
                break; 
            case 9: 
                deletionAtTail(head); 
                break; 
            case 10: 
                if(head==NULL){ 
                    cout << "There is no value in linked list!\n"; 
                    break; 
                } 
                cout << "Enter the desired position : ";  
                cin >> position;  
                deleteAtSpecificPosition(head,position); 
                //display(head); 
                break; 
            case 11: 
                cout << "Enter the value to delete : "; 
                int delValue; 
                cin >> delValue; 
                deletionByValueUnique(head,delValue); 
                break; 
            case 12: 
                cout << "Enter the key to delete : "; 
                cin >> value; 
                Node* result; 
                result = deletionByValueDuplicate(head,value); 
                if(result == NULL){ 
                    cout << "Key not found\n"; 
                }else { 
                    display(result); 
                } 
                break; 
            case 13: 
                Node* iterativeReverse; 
                iterativeReverse = reverseIteratively(head); 
                display(iterativeReverse); 
                break; 
            case 14: 
                if(head==NULL){ 
                    cout << "The linked list is empty\n"; 
                    break; 
                } 
                Node* recursiveReverse; 
                recursiveReverse = reverseRecursively(head); 
                display(recursiveReverse); 
                break; 
            case 15:
                int mid;
                mid = findMid(head);
                if(mid==-1)
                    cout << "The LL is empty\n";
                else 
                    cout << "Mid Value is : " << mid << '\n';
                break;
            case 16:
                cout << "Enter the desired position to Create Cycle: ";  
                cin >> position;  
                createCycle(head,position);
                break;
            case 17:
                bool cycleStatus;
                cycleStatus = detectCycle(head);
                if(cycleStatus==true)
                    cout << "There is a Cycle in the LL\n";
                else 
                    cout << "There is NO Cycle in the LL\n";
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
   
    Linked List : 15
      
    Create and Detect cycle in LL
     
      
   
*/   
      
     
