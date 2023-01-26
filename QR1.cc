#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class Queue
{
    Node *front;
    Node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }
    // here head=front
    void push(int x) // As it is of style ll and properties Queues,it is called ll implementation of Queues
    {
        Node *temp = new Node(x);
        if (back == NULL)
        {
            back = temp;
            front = temp; //front will not move as it is the head of the ll
        }
        back->next = temp; //1) - \-\ \- \- \- 
        back = temp; // temp node added at back as the property of Queues but in ll style
    }
    void pop() // temp node removed from the front as the property of Queues but in ll style
    {
        Node *temp = front; //2)
        front = front->next; // head is same as front
        delete temp;
        return;
    }
    int peek()
    {
        if (front == NULL)
            return -1;
        
        return front->data ;

    }
    bool isempty()
    {
        if (front == NULL)
            return true;
        else
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
    cout << Q.isempty();
    return 0;
}