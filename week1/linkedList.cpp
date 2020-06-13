#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node *front;
    Node *tail;
    int sz;
    LinkedList(){
        front = NULL;
        tail = NULL;
        sz = 0;
    }

    void pushFront(int data){
        Node *nn = new Node(data);
        if(front == NULL){
            front = nn;
            tail = nn;
        }
        else{
            front->next = nn;
            nn->prev = front;
            front = nn;
        }
        sz++;
    }

    void popFront(){
        if(front != NULL){
            front = front->prev;
            if(front == NULL)
                tail = NULL;
            else
            {
                front->next = NULL;
            }
        }
        sz--;
    }

    void pushBack(int data){
        Node *nn = new Node(data);
        if(front == NULL){
            front = nn;
            tail = nn;
        }
        else{
            nn->next = tail;
            tail->prev = nn;
            tail = nn;
        }
        sz++;
    }

    void popBack(){
        if(tail != NULL){
            tail = tail->next;
            if(tail == NULL){
                front = NULL;
            }
            else{
                tail->prev = NULL;
            }
        }
        sz--;
    }

    void push(Node *a, Node *c){
        Node *b = a->next;
        if(b == NULL){
            pushFront(c->data);
        }else{
            a->next = c;
            c->prev = a;
            c->next = b;
            b->prev = c;
        }
        sz++;
    }

    // void pop(){
    //     if(a->next == NULL)
    //         popFront();
    //     else if(a->prev == NULL)
    //         popBack();
    //     else{
    //         a->prev->next = a->next;
    //         a->next->prev = a->prev;
    //     }
    //      sz--;
    // }

    bool search(Node* front, int x)  
    {  
        Node* current = front;  
        while (current != NULL)  
        {  
            if (current->data == x)  
                return true;  
            current = current->next;  
        }  
        return false;  
    } 

    int size(){
        return sz;
    } 
};

int main(){
    LinkedList *ll = new LinkedList();
    ll->pushBack(1);
    ll->pushFront(2);
    cout << ll->size() << endl;
    ll->popFront();
    ll->popBack();
    cout << ll->size() << endl;
    ll->pushBack(11);
    ll->pushFront(22);
    ll->pushBack(12);
    ll->pushFront(23);
    ll->pushBack(13);
    ll->pushFront(24);
    if(ll->search(ll->front, 24)){
        cout << "found" << endl;
    }
    cout << ll->front->data << endl;
    cout << ll->size() << endl;
    return 0;
}