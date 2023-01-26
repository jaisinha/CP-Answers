// #include<bits/stdc++.h>
// using namespace std;
// class Queu{
//     queue<int> s1;
//     queue<int> s2;
// public:
// void push(int x)
// {
//     s1.push(x);
// }
// void pop()
// {
//     if(s1.empty()&&s2.empty())
//     return;
//     else
//     {
//         if(s2.empty())
//         {
//             while(!s1.empty())
//             {
//                 s2.push(s1.top())
//                 s1.pop();
//             }
//         }
//         int topval=s2.top();
//         s2.pop();
//         return topval;
//     }
// }
// bool empty()
// {
//     if(isempty())
//     return true;
//     else
//     return false;
// }
// };
// int main()
// {
//   Queu Q;
//   Q.push(1);
//   Q.push(2);
//   Q.push(3);
//   Q.push(4);
//   Q.push(5);
//   Q.pop();
//   Q.pop();
//   Q.pop();
//   Q.pop();
//   Q.pop();
//   Q.pop();
//   cout<<empty();
// }