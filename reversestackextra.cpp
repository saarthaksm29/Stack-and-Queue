#include <bits/stdc++.h>
using namespace std;

void transfer(stack<int> &s1, stack<int> &s2, int n)
{
    for (int i = 0; i < n; i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}

void reverseStack(stack<int> &s1)
{
    stack<int> s2;

    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        //Store the topmost element in a variable x
        int x = s1.top();
        s1.pop();

        //Transfer the remaining n-i-1 elements from s1 to s2
        transfer(s1, s2, n - i - 1);

        //Push the stored element
        s1.push(x);

        //Transfer back the remaining n-i-1 elements from s2 to s1
        transfer(s2, s1, n - i - 1);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    stack<int> s;
    for (int i = 1; i < 5; i++)
    {
        s.push(i);
    }

    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}