#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *front;
    Node *tail;
    int sz;
    LinkedList()
    {
        front = NULL;
        tail = NULL;
        sz = 0;
    }

    void pushFront(int data)
    {
        Node *nn = new Node(data);
        if (front == NULL)
        {
            front = nn;
            tail = nn;
        }
        else
        {
            front->next = nn;
            nn->prev = front;
            front = nn;
        }
        sz++;
    }

    void popFront()
    {
        if (front != NULL)
        {
            front = front->prev;
            if (front == NULL)
                tail = NULL;
            else
            {
                front->next = NULL;
            }
        }
    }

    void popBack()
    {
        if (tail != NULL)
        {
            tail = tail->next;
            if (tail == NULL)
            {
                front = NULL;
            }
            else
            {
                tail->prev = NULL;
            }
        }
    }

    void push(Node *a, Node *c)
    {
        Node *b = a->next;
        if (b == NULL)
        {
            pushFront(c->data);
        }
        else
        {
            a->next = c;
            c->prev = a;
            c->next = b;
            b->prev = c;
        }
        sz++;
    }

    void pop(Node *a)
    {
        if (a->next == NULL)
            popFront();
        else if (a->prev == NULL)
            popBack();
        else
        {
            a->prev->next = a->next;
            a->next->prev = a->prev;
        }
    }

    bool search(Node *front, int x)
    {
        Node *current = front;
        while (current != NULL)
        {
            if (current->data == x)
                return true;
            current = current->next;
        }
        return false;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    Node *current;
    LinkedList *ll = new LinkedList();
    string s;

    ll->pushFront(11);
    ll->pushFront(12);
    ll->pushFront(12);
    ll->pushFront(15);
    ll->pushFront(14);
    ll->pushFront(15);
    ll->pushFront(15);
    
    for (int i = 0; i < ll->size(); i++)
    {
        current = ll->front;
        cout << current->data << endl;

        if (ll->search(ll->front, current->data))
        {
            ll->pop(current);
        }
        else
        {
            ll->popFront();
        }
        ll->popFront();
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
