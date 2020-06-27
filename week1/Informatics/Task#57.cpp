#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> queue;
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
                queue.push(n);
                cout << "ok" << endl;
            }
            if (s == "size")
                cout << queue.size() << endl;
            if (s == "clear")
            {
                while (!queue.empty())
                    queue.pop();
                cout << "ok" << endl;
            }
            if (s == "pop"){
                cout << queue.front() << endl;
                queue.pop();}
            if (s == "front")
                cout << queue.front() << endl;
        }
    }
    return 0;
}





// #include <iostream>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;

//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class Queue
// {
// public:
//     Node *head;
//     Node *tail;
//     int sz;
//     Queue()
//     {
//         head = NULL;
//         tail = NULL;
//         sz = 0;
//     }

//     int size()
//     {
//         return sz;
//     }

//     bool empty()
//     {
//         return sz == 0;
//     }

//     void push_back(int data)
//     {
//         Node *node = new Node(data);
//         if (head == NULL)
//         {
//             head = node;
//             tail = node;
//         }
//         else
//         {
//             node->prev = tail;
//             node->next = node;
//             tail = node;
//         }
//         sz++;
//     }

//     void pop_front()
//     {
//         if (head != NULL)
//         {
//             head = head->next;
//             sz--;
//         }
//     }

//     int front()
//     {
//         return head->data;
//     }
// };

// int main()
// {

//     Queue *queue = new Queue();
//     while (true)
//     {
//         string s;
//         cin >> s;

//         if (s == "push")
//         {
//             int n;
//             cin >> n;
//             queue->push_back(n);
//             cout << "ok" << endl;
//         }

//         else if (s == "pop")
//         {
//             cout << queue->front();
//             queue->pop_front();
//         }

//         else if (s == "front")
//         {
//             cout << queue->front() << endl;
//         }

//         else if (s == "size")
//         {
//             cout << queue->size() << endl;
//         }

//         else if (s == "clear")
//         {
//             while (!queue->empty())
//             {
//                 queue->pop_front();
//             }
//             if (queue->empty())
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