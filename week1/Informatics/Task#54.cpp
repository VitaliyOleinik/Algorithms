#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    int n;
    string s;

    for (;;)
    {
        cin >> s;
        if (s == "exit")
        {
            cout << "bye";
            return 0;
        }
        {
            if (s == "push")
            {
                cin >> n;
                st.push(n);
                cout << "ok" << endl;
            }
            if (s == "size")
                cout << st.size() << endl;
            if (s == "clear")
            {
                while (!st.empty())
                    st.pop();
                cout << "ok" << endl;
            }
            if (s == "pop"){
                cout << st.top() << endl;
                st.pop();}
            if (s == "back")
                cout << st.top() << endl;
        }
    }
    return 0;
}


// #include <iostream>


// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next; //ссылка на след элемент

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// class Stack{
//     public:
//     Node *top;
//     int sz;

//     Stack(){
//         top = NULL;
//         sz = 0;
//     }

//     void push(int data){
//         Node *newNode = new Node(data);
//         newNode->next = top;
//         top = newNode;
//         sz++;
//     }

//     void pop(){
//         if(top != NULL){
//             top = top->next;
//             sz--;
//         }
//     }

//     int size(){
//         return sz;
//     }

//     bool empty()
//     {
//         return sz == 0;
//     }

//     int back(){
//         return top->data;
//     }

//     Node *topElement(){
//         return top;
//     }
// };

// int main()
// {
//     Stack *st = new Stack();

//     while(true){
//         string s;
//         cin >> s;

//         if (s == "push")
//         {
//             int n;
//             cin >> n;
//             st->push(n);
//             cout << "ok" << endl;
//         }

//         else if (s == "pop")
//         {
//             cout << st->back();
//             st->pop();
//         }

//         else if (s == "size")
//         {
//             cout << st->size() << endl;
//         }

//         else if (s == "clear")
//         {
//             while (!st->empty())
//             {
//                 st->pop();
//             }
//             if (st->empty())
//             {
//                 cout << "ok" << endl;
//             }
//         }

//         else if (s == "exit")
//         {
//             cout << "bye" << endl;
//             exit(0);
//         }
//     }
//     return 0;
// }
