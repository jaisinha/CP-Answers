#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define cint const int
#define fo(number1, number2, number3) for (int number1 = number2; number1 < number3; ++number1)
#define rfo(number1, number2, number3) for (int number1 = number2 - 1; number1 >= number3; --number1)
#define pi pair<int, int>
#define vLL vector<ll>
#define vi vector<int>
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define lbd lower_bound
#define ubd upper_bound
#define mp make_pair
#define cps CLOCKS_PER_SEC
#define decimal(k) fixed << setprecision(k)
#define PI 3.14159265359
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ff first
#define ss second
#define all(V) (V).begin(), (V).end()
#define alla(a, n) a, a + n
#define sz(v) (ll) v.size()
#define SORT(v) sort(all(v))
#define REV reverse
#define SUM(v) accumulate(v.begin(), v.end(), 0)
#define MAX max_element
#define MIN min_element
#define UNIQUE(v) \
    SORT(v);      \
    v.erase(unique(v.begin(), v.end()), v.end())
#define UNIQUEA(a, n) unique(a, a + n) - a
#define MAXA(a, n) max_element(a, a + n)
#define MINA(a, n) min_element(a, a + n)
#define SORTA(a, n) sort(alla(a, n))
#define REVA(a, n) reverse(alla(a, n))
#define mem1(a) memset(a, -1, sizeof(a));
#define mem0(a) memset(a, 0, sizeof(a));
#define mymax 1000000000000000100
#define mymin -1000000001
#define bitcount __builtin_popcount
#define gcd __gcd
#define MOD (ll)1000000007
#define TEST(t) \
    int tc;     \
    cin >> tc;  \
    fo(t, 1, tc)
#define VECT(v, n) \
    ll n;          \
    cin >> n;      \
    vLL v(n);      \
    fo(i, 0, n - 1) cin >> v[i];
#define NUM(n) \
    ll n;      \
    cin >> n;
#define STRING(s) \
    string s;     \
    cin >> s;
#define TS to_string
#define len(s) (s).length()
#define line cout << "\n";
#define el "\n"
#define clkstart auto start = high_resolution_clock::now();
#define clkend                                \
    auto stop = high_resolution_clock::now(); \
    auto duration = duration_cast<microseconds>(stop - start);
#define TIME \
    line;    \
    line;    \
    cout << "Time taken by function: " << duration.count() / 1e6 << " seconds" << endl;
#define open {
#define close }
#define goog(tno) cout << "Case #" << tno << ": "
#define deb(x) cout << #x << " = " << x << el;
#define deb2(x, y) cout << #x << " = " << x << " : " << #y << " = " << y << el;
// #ifndef SEGMENTTREE_H
#define SEGMENTTREE_H
#define left(i) (2 * i + 1)
#define right(i) (2 * i + 2)
#define parent(i) ((i - 1) / 2)
using namespace std;
#define pair <int, pair<int, int>> ppi
// bool is_perfect_square(ll n) {
//     if (n < 0)
//         return false;
//     ll root(round(sqrt(n)));
//     return n == root * root;
// }
// bool isPrime(ll N) {                 // a good enough deterministic prime tester
//   if (N <= _sieve_size) return bs[N];                   // O(1) for small primes
//   for (int i = 0; i < (int)primes.size(); i++)
//     if (N % primes[i] == 0) return false;
//   return true;                    // it takes longer time if N is a large prime!
// }
// int main()
// {
//     int n, m;
//     cin>>n>>m;
//     vi v[n+1]; //1 based indexing(Assumpsion)
//     for (int i = 0; i < m; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         v[a].pb(b);
//         v[b].pb(a);
//     }
// for (auto &i : v)
// {
//     for(auto &j:i)
//     cout << j << " ";
//     line
// }
// }
// bfs
// void bfs(vector<int> adj[], vector<int> &vis, int n)
// {
//     vi bfs;
//     queue<int> Q;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!vis[i])
//         {
//             vis[i] = 1;
//             Q.push(i);
//             while (!Q.empty())
//             {
//                 int node = Q.front();
//                 Q.pop();
//                 bfs.pb(node);
//                 for (auto &it : adj[node])
//                 {
//                     if (!vis[it])
//                     {
//                         Q.push(it);
//                         vis[it] = 1;
//                     }
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vi adj[n + 1]; //1 based indexing(Assumpsion)
//     vi vis(0, n);
//     for (int i = 0; i < m; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].pb(b);
//         adj[b].pb(a);
//     }
// }
// dfs
// void dfss(int node, vector<int> adj[], vector<int> &vis, int n, vector<int> &dfs)
// {
//     dfs.pb(node);
//     vis[node] = 1;
//     for (auto it : adj[node])
//     {
//         if (!vis[it])
//             dfss(it, adj, vis, n, dfs);
//     }
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vi adj[n + 1]; //1 based indexing(Assumpsion)
//     vi vis(n+1, 0); // same reason
//     for (int i = 0; i < m; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].pb(b);
//         adj[b].pb(a);
//     }
//     vi dfs;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!vis[i])
//             dfss(i, adj, vis, n, dfs);
//     }
//     for (auto &i : dfs)
//         cout << i << " ";
// }
// checkcycle(bfs)
// void bfs(vector<int> adj[], vector<int> &vis, int n)
// {
//     vi bfs;
//     queue<pair<int,int >> Q;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!vis[i])
//         {
//             vis[i] = 1;
//             Q.push({-1,i});
//             while (!Q.empty())
//             {
//                 int par = Q.front().first;
//                 int node = Q.front().second;
//                 Q.pop();
//                 bfs.pb(node);
//                 for (auto &it : adj[node])
//                 {
//                     if (!vis[it])
//                     {
//                         Q.push(node,it);
//                         vis[it] = 1;
//                     }
//                     else if(it!=par)
//                     return true;
//                 }
//             }
//             return false;
//         }
//     }
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vi adj[n + 1]; //1 based indexing(Assumpsion)
//     vi vis(n+1, 0);
//     for (int i = 0; i < m; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].pb(b);
//         adj[b].pb(a);
//     }
// }
// bool bfs(vector<int> adj[], int color[], int n)
// {
//     queue<int> Q;
//     color[1] = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         Q.push(i);
//         while (!Q.empty())
//         {
//             int node = Q.front();
//             Q.pop();
//             // cout << node;
//             // line
//             // bfs.pb(node);
//             for (auto &it : adj[node])
//             {
//                 // cout << it;
//                 if (color[it] == -1)
//                 {
//                     color[it] = 1 - color[node];
//                     Q.push(it);
//                 }
//                 else if (color[it] == color[node])
//                 {
//                     return false;
//                 }
//             }
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vi adj[n + 1]; // 1 based indexing(Assumpsion)
//     for (int i = 0; i < m; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].pb(b);
//         adj[b].pb(a);
//     }
//     int color[n];
//     for (int i = 1; i <= n; i++)
//         color[i] = -1;
//     if (!bfs(adj, color, n))
//         return 0;
//     for (int i = 1; i <= n; i++)
//         cout
//             << color[i] << " ";
// }
// kahn's algorithm
void topbfs(vector<int> &v, vector<int> adj[], int n)
{
    queue<int> Q;
    vi top;
    fo(i, 0, n)
    {
        if (v[i] == 0)
            Q.push(i);
    }
    while (!Q.empty())
    {
        int node = Q.front();
        Q.pop();
        top.pb(node);
        for (auto &i : adj[node])
        {
            if (v[i] > 0)
                v[i]--;
            if (v[i] == 0)
                Q.push(i);
        }
    }
    fo(i, 0, top.size())
            cout
        << top[i] << " ";
}
int main()
{
    int n, m;
    cin >> n >> m;
    vi adj[n + 1]; // 1 based indexing(Assumpsion)
    vi v;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
    }
    fo(j, 0, n)
    {
        for (auto &i : adj[j])
            v[i]++;
    }
    topbfs(v, adj, n);
}