#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// int main()
// {
//     ll m1;
//     cin >> m1;
//     while (m1--)
//     {
//         vector<int> m;
//         ll n;
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             int a;
//             cin >> a;
//             m.push_back(a);
//         }
//         ll sum;
//         for (int i = 0; i < n - 1; i++)
//         {
//             sum = 0;
//             if (m[i] > m[i + 1])
//             {
//                 sum += m[i+1];
//                 m.erase(m.begin() + i);
//             }
//             else
//             {
//                 sum += m[i];
//                 m.erase(m.begin() + i + 1);
//             }
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }
// int func(int a[5])
// {
// int c;
// for(int i = 1; i < 4; i++){
// a[i] = a[i-1] - a[i] + a[i+1];
// c=a[i];}
// return c;
// }
// int main()
// {
//     int a[5];
//     for(int i=0;i<5;i++)
//     cin>>a[i];
//     cout<<func(a);
//     return 0;
// }