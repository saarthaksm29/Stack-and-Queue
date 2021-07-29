#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack
{
    vector<T> v;

public:
    void push(T d)
    {
        v.push_back(d);
    }

    bool empty()
    {
        return v.size() == 0;
    }

    void pop()
    {
        if (!empty())
        {
            v.pop_back();
        }
    }

    T top()
    {
        return v[v.size() - 1];
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    Stack<char> st;
    for (int i = 65; i <= 70; i++)
    {
        st.push(i);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}