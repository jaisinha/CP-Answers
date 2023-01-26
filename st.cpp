#include <iostream>
using namespace std;
#define n 100
struct stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "StackOverflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Empty Stack" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Empty Stack" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isempty()
    {
        return top == -1;
    }
};
int main()
{
    stack s;
    stack s1;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while (!s.isempty())
    {
        s1.push(s.Top());
        cout << s.Top() << " ";
        s.pop();
    }
    cout << endl;
    while (!s1.isempty())
    {
        cout << s1.Top() << " ";
        s1.pop();
    }
}