#include <bits/stdc++.h>
using namespace std;

class minmaxStack
{
    vector<int> stack;
    vector<int> min_stack;
    vector<int> max_stack;

public:
    void push(int data)
    {
        int currentmin = data;
        int currentmax = data;

        if (min_stack.size())
        {
            currentmin = min(min_stack[min_stack.size() - 1], data);
            currentmax = max(max_stack[max_stack.size() - 1], data);
        }
        min_stack.push_back(currentmin);
        max_stack.push_back(currentmax);
        stack.push_back(data);
    }

    int getmin()
    {
        return min_stack[min_stack.size() - 1];
    }

    int getmax()
    {
        return max_stack[max_stack.size() - 1];
    }

    int top()
    {
        return stack[stack.size() - 1];
    }

    bool empty()
    {
        return stack.size() == 0;
    }
    void pop()
    {
        min_stack.pop_back();
        max_stack.pop_back();
        stack.pop_back();
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    minmaxStack s;
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(8);

    cout << s.getmax() << endl;
    s.pop();
    cout << s.getmin() << endl;
    cout << s.getmax() << endl;

    s.pop();
    s.pop();
    cout << s.top() << endl;
    cout << s.getmax() << endl;

    return 0;
}