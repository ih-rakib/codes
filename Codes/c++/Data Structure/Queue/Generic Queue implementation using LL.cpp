#include<bits/stdc++.h>
using namespace std;

typedef pair<char,int> myPair;

template<typename N> class Node {
public:
    N value;
    Node<N> *next;

    Node(N val) {
        this->value = val;
        this->next = NULL;
    }
};

template<typename Q> class Queue {
    Node<Q> *front;
    Node<Q> *rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    // enqueue --> push(int val)
    void push(Q val) {
        Node<Q> *newNode = new Node<Q> (val);

        if(front==NULL) {
            front = newNode;
            rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = rear->next;
    }

    // deque --> pop()
    Q pop() {
        Q check;
        if(rear==NULL) {
            cout << "Queue empty | No element in the Queue" << '\n';
            return check;
        }

        Node<Q> *delNode;
        delNode = front;

        front = front->next;
        if(front == NULL) {
            rear = NULL;
        }
        check = delNode->value;
        delete delNode;
        return check;
    }

    // peek --> front(), back()
    Q Front() {
        Q check = front->value;
        return check;
    }

    Q Back() {
        Q check = rear->value;
        return check;
    }

    // empty --> empty()
    bool empty() {
        if(front == NULL and rear == NULL) {
            return true;
        } else {
            return false;
        }
    }

};

int main() {

/*
    Queue<int> q;

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
*/

    Queue<myPair> q;

    int n;
    cin >> n;

    for(int i=0; i<n; ++i) {
        char c1;
        int c2;
        
        cin >> c1 >> c2;
        q.push(make_pair(c1,c2));
    }

    // front
    myPair t;
    t = q.Front();
    cout << "Front : " << t.first << " | " << t.second << '\n';

    // back
    myPair u;
    u = q.Back();
    cout << "Back : " << u.first << " | " << u.second << '\n';
 
    while(!q.empty()) {
        myPair v;
        v = q.pop();
        cout << v.first << " | " << v.second << '\n';
    }

    return 0;
}


/*

    Generic Queue implementation using LL


*/