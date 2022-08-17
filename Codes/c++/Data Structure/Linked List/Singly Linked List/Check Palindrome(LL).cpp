#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    char value;
    Node* next;
    
    Node(char val){
        this->value = val;
        this->next = NULL;
    }
};

Node* middle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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

bool isPalindrome(Node* &head){
    if(head==NULL){
        return true;
    }
    Node* mid = middle(head);
    Node* last = reverseIteratively(mid->next);
    //cout << "last = " << last->value << " " << last->next->value << '\n';
    Node* cur = head;
    //cout << "cur = " << cur->value << '\n';
    
    while(last != NULL){
        if(last->value != cur->value){
            return false;
        }
        cur = cur->next;
        last = last->next;
    }
    return true;
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
    Node* head = new Node('R');
    Node* one = new Node('A');
    Node* two = new Node('D');
    Node* three = new Node('A');
    Node* four = new Node('R');
    
    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    
    display(head);
    //reverseIteratively(head);
    //display(head);
    
    if(isPalindrome(head))
        cout << "Palindrome\n";
    else 
        cout << "Not Plaindrome\n";

    return 0;
}


/*

    Check Palindrome(LL)

*/