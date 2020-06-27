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
            if (s == "pop")
            {
                if (!st.empty())
                {
                    cout << st.top() << endl;
                    st.pop();
                }
                else
                    cout << "error" << endl;
            }
            if (s == "back")
            {
                if (!st.empty())
                {
                    cout << st.top() << endl;
                }
                else
                    cout << "error" << endl;
            }
        }
    }
    return 0;
}