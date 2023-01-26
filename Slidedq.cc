#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// Brute force
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     dequeue<int> dq;
//     vector<int> v;
//     int ans=-1;
//     for(int i=0;i<n;i++)
//     {
//         int ele;
//         cin>>ele;
//         v.pb(ele);
//     }
//     for(int i=0;i<k;i++)
//         ans=max(ans,v[i]);
//     dq.pb(ans);
//     for(int i=k;i<2*k;k++)
//     {
//         dq.pb(v[i])
//         if(v[i]>dq.back())
//         {
//             dq.erase(dq.back);
//             dq.pb(v[i]);
//         }
//     }
//     k+=3;}
// }
// main Solution T.C-:(O)n
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     deque<int> dq;
//     vector<int> v(n);
//     vector<int> ans;
//     for(auto &i:v) // if no & then only a copy is made and any changes done in the vector only affects the copied array not the orignal one
//     cin>>i;
//     for(int i=0;i<k;i++)
//     {
//         while (!dq.empty() && v[i]>v[dq.back()])  // Already pushed a set so that future set has a number to move on with it's operation
//             dq.pop_back();
//         dq.push_back(i);
//     }
//     ans.push_back(v[dq.front()]);
//     for(int i=k;i<n;i++)
//     {
//         if(dq.front()==i-k)  // deletes the previous window's maximum
//         dq.pop_front();
//         while (!dq.empty() && v[i]>v[dq.back()])  // if we input a number then all the numbers smaller than the number will be deleted...(i)
//                                                  // so front of the deque will always show the greatest value of the given window
//             dq.pop_back();   //(i)
//         dq.push_back(i);
//     ans.push_back(v[dq.front()]);
//     }
//     for(auto i:ans)
//     cout<<i<<" ";
// }