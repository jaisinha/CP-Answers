// Kth smallest
#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n,k;cin>>n>>k;
//     int a[n];
// for(int i=0;i<n;i++)
// {
//     cin>>a[i];
// }
// priority_queue<int> maxh;
//     for(int i=0;i<n;i++)
//     {
//         maxh.push(a[i]);
//         if(maxh.size()>k);
//         maxh.pop();
//     }
//         cout<<maxh.top();
//     return 0;
// }
// Return K largest Elements in array
// int main()
// {
//     int n,k;cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     priority_queue <int, vector<int>, greater<int> > pq;
//     for(int i=0;i<n;i++)
//     {
//         pq.push(a[i]);
//         if(pq.size()>k)
//         pq.pop();
//     }
//     while(pq.size()!=0){
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
// }
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int c, a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
// priority_queue <int, vector<int>, greater<int> > pq;
//     for (int i = 0; i < n; i++)
//     {
//         pq.push(a[i]);
//         if (pq.size() > k)
//         {
//             cout<<a[i]<<" ";
//             pq.pop();
//         }
//     }
//     while (pq.size() != 0)
//     {
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
// }
// int main()
// {
    // priority_queue<pair<int, int>> maxh;
//     int n, X;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     int k;
//     cin>>k>>X;
//     for (int i = 0; i < n; i++)
//     {
//         maxh.push({abs(a[i] - X), a[i]});
//         if (maxh.size() > k)
//             maxh.pop();
//     }
//     while (maxh.size() != 0)
//     {
//         cout << maxh.top().second << " ";
//         maxh.pop();
//     }
// }
// int main()
// {
//     priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
//     int n, k;
//     cin >> n >> k;
//     map<int, int> m;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         m[a[i]]++;
//     }
//     for (auto i = m.begin(); i != m.end(); i++)
//     {
//         pq.push({i->second, i->first});
//         if (pq.size() > k)
//             pq.pop();
//     }
//     while (pq.size() != 0)
//     {
//         cout << pq.top().second << " ";
//         pq.pop();
//     }
// }
// int main()
// {
    // priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
//     int n;
//     cin >> n;
//     map<int, int> m;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         m[a[i]]++;
//     }
//     for (auto i = m.begin(); i != m.end(); i++)
//         pq.push({i->second, i->first});
//      while (pq.size() != 0)
//     {
//         cout << pq.top().second << " ";
//         pq.pop();
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     priority_queue<pair<int,pair<int, int>>> maxh;
//     int x,y;
//     int n,k;cin>>n>>k;
//     for(int i=0;i<n;i++)
//     {
//         cin>>x>>y;
//         int c=sqrt(x*x+y*y);
//         maxh.push({c,{x,y}});
//         if(maxh.size()>k)
//         maxh.pop();
//     }
//     while(maxh.size()!=0){
//     pair<int,int> p=maxh.top().second;
//     cout<<p.first<<","<<p.second<<" ";
//     maxh.pop();}
// }
int main()
{
    priority_queue<int> maxh;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int count=0,totsum=0,sum=0;
    for(int i=0;i<n;i++)
    maxh.push(a[i]);
    while(maxh.size()!=0)
    {
        if(count!=2)
        {
            sum+=maxh.top();
            count++;
            maxh.pop();
            cout<<sum<<" ";
        }
        else{
            maxh.push(sum);
            totsum+=sum;
            sum=0;
            count=0;
        }
    }
    // cout<<totsum;
}