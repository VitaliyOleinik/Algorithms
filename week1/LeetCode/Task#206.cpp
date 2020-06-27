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

    int size(){
        return sz;
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
};

int main(){
    LinkedList *ll = new LinkedList();
    ll->pushFront(11);
    ll->pushFront(12);
    ll->pushFront(13);
    ll->pushFront(14);
    ll->pushFront(15);
    ll->pushFront(16);
    bool check = ll->size() != 0;
    while(check){
        cout << ll->front->data;
        ll->popFront();
        if(ll->size() >= 1){    
            cout << " -> ";
        }
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(NULL) {}
//     ListNode(int x) : val(x), next(NULL) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
 

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode *i = head;
//         ListNode *j = head->next;
//         ListNode *temp;
//         while(i != NULL, j != NULL){
//             if(i->val == j->val){
//                 temp = j;
//                 j = j->next;
//                 i->next = j;
//                 delete(temp);
//             }else{
//                 i = j;
//                 j = j->next;
//             }
//         }
//         return head;
//     }
// };