#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) {
        this->value = val;
        this->next = NULL;
    }
};

class Queue {
    Node* front;
    Node* reer;

public:
    Queue() {
        front = NULL;
        reer = NULL;
    }

    // enqueue --> push(int val)
    void push(int val) {
        Node* newNode = new Node(val);

        if(front==NULL) {
            front = newNode;
            reer = newNode;
            return;
        }

        reer->next = newNode;
        reer = reer->next;
    }

    // deque --> pop()
    int pop() {
        int check = -1;
        if(reer==NULL) {
            cout << "Queue empty | No element in the Queue" << '\n';
            return check;
        }

        Node* delNode;
        delNode = front;

        front = front->next;
        if(front == NULL) {
            reer = NULL;
        }
        check = delNode->value;
        delete delNode;
        return check;
    }

    // peek --> front(), back()
    int Front() {
        int check = front->value;
        return check;
    }

    int Back() {
        int check = reer->value;
        return check;
    }

    // empty --> empty()
    bool empty() {
        if(front == NULL and reer == NULL) {
            return true;
        } else {
            return false;
        }
    }

};

int main() {
    Queue q;

    int n;
    cin >> n;

    for(int i=0; i<n; ++i) {
        int val;
        cin >> val;
        q.push(val);
    }

    // front
    cout << "Front : " << q.Front() << '\n';

    // back
    cout << "Back : " << q.Back() << '\n';

    while(!q.empty()) {
        cout << q.pop() << '\n';
    }

    return 0;
}


/*

    Queue implementation using LL


*/