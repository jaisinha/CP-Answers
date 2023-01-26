#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define n 20
class Queue
{
    int *arr;
    int front;
    int back;
    public:
    Queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x)
    {
        if(back==n-1){
        cout<<"Queue Overflow";
        return;}
        else
        back++;
        arr[back]=x;
        if(front==-1)
        front++;
    }
    void pop()
    {
        if(front==-1||front>back){
        cout<<"Empty Queue";
        return;}
        front++;
    }
    int peek()
    {
        if(front==-1||front>back){
        cout<<"Empty Queue";
        return -1;}
        return arr[front];
    }
    bool empty()
    {
        if(front==-1||front>back)
        return true;
        return false;
    }
};
int main(){
Queue Q;
Q.push(1);
Q.push(2);
Q.push(3);
Q.push(4);
cout<<Q.peek()<<endl;
Q.pop();
cout<<Q.peek()<<endl;
Q.pop();
cout<<Q.peek()<<endl;
Q.pop();
cout<<Q.peek()<<endl;
Q.pop();
cout<<Q.empty();
return 0;
}