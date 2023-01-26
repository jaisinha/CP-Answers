#include <bits/stdc++.h>
using namespace std;
class QuSt
{
    stack<int> s; // remember it
        public : 
    void push(int x)
    {
        s.push(x);
    }
    int pop()
    {
        if (s.empty())
        {
            cout << "Queue is empty" << endl;
            return -1; 
        }
        int x = s.top();  // once the element is used just ignore it {for the sak of logi building}
        s.pop();
        if (s.empty())
            return x;  // Revisit it tommorrow
        int item = pop();
        s.push(x);
        return item;
    }
    int peek()
    {
        return s.top();
    }
    bool empty()
    {
        if (s.empty())
            return true;
        return false;
    }
};
int main()
{
    QuSt Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    cout<<Q.pop()<<endl;
    cout<<Q.pop()<<endl;
    cout<<Q.pop()<<endl;
    cout<<Q.pop()<<endl;
    cout<<Q.pop()<<endl;
    cout<<Q.empty();
}