#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// #define n 20
class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};
class Queue
{
    // int *arr;
    node *front;
    node *back;

public:
    Queue()
    {
        // arr=new int[n];
        front = NULL;
        back = NULL;
    }
    void push(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            front = n;
            back = n;
        }
        back->next = n;
        back = n;
    }
    void pop()
    {
        if (front == NULL)
            return;
        node *todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if (front == NULL)
            return -1;
        return front->data;
    }
    bool empty()
    {
        if (front == NULL)
            return true;
        return false;
    }
};
int main()
{
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.empty();
    return 0;
}