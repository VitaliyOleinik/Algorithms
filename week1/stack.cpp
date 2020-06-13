#include <iostream>


using namespace std;

class Node{
    public:
    int data;
    Node *next; //ссылка на след элемент

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    public:
    Node *top;
    int size;

    Stack(){
        top = NULL;
        size = 0;
    }

    void push(int data){
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
        size++;
    }

    void pop(){
        if(top != NULL){
            top = top->next;
            size--;
        }
    }

    int size(){
        return size;
    }

    bool empty(){
        if(size == 0)
            return true;
        else
            return false;
    }

    Node *topElement(){
        return top;
    }
};

int main()
{
    Stack *st = new Stack();
    st->push(10);
    st->push(14);
    st->push(13);
    st->push(12);
    st->push(11);
    st->pop();

    cout << st->top->data << endl;
    cout << st->size << endl;
    

    
    return 0;
}
