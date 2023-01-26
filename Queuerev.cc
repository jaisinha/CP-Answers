#include <bits/stdc++.h>
using namespace std;
#define n 20
class Que
{
    int *arr;
    int front;
    int back;

public:
    Que()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x) // from the back
    {
        if (front == -1)
            front += 1;
        if (back == n - 1)
            cout << "full Queue" << endl;
        else
        {
            back += 1;
            arr[back] = x;
        }
    }
    void pop() // from the front
    {
        if (front == -1 || front>back) // changes done {front>back},else is removed
            cout << "Empty Queue" << endl;
            front += 1;
    }
    int peek()
    { // gives the value of the front variable
        if (front == -1)
            return -1;
        else
            return arr[front];
    }
    bool empty()
    {
        if(front==-1 || front>back)  // second statement has effect as front will be greater than back but never -1;
        return true;
        else
        return false;
    }
};
int main()
{
    Que Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.empty() << endl;
}