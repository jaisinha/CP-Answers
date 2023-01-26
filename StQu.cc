#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define n 20
class Que
{
    public:
    int *arr;
    int front;
    int back;
    Que()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x)
    {
        if(back==n-1){
        cout<<"stack Overflow";
        return;}
        else
        back++;
        arr[back]=x;
        if(front==-1)
        front++;
    }
    int pop()
    {
        if(back==-1)
        return -1;
        back-=1;
        return arr[back+1];
    }
    bool empty()
    {
        if(front>back || front==-1)
        return true;
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
    cout << Q.pop() << endl;
    cout << Q.pop() << endl;
    cout << Q.pop() << endl;
    cout << Q.pop() << endl;
    cout << Q.pop() << endl;
    cout << Q.empty() << endl;
}