// STACK APPROCH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll m;
//     cin >> m;
//     vector<ll> v(m);
//     for (auto &i : v)
//         cin >> i;
//     ll ans = -1;
//     sort(v.begin(),v.end());
//     for (ll i = 0; i < m; i++)
//     {
//         if (m - i < v[i])
//             ans = max(ans, (m - i) * v[i]);
//     }
//     cout << ans;
//     return 0;
// }