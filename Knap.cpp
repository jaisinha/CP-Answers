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
// #define pair <int, pair<int, int>> ppi
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
// struct predicate
// {
//     bool operator()(const vector<pair<int,pair<int, int> >> &left, const vector<pair<int,pair<int, int> >> &right)
//     {
//         return left.first.first < right.first.first;
//     }
// };

// // sort(rank.rbegin(), rank.rend(), predicate());
// int main()
// {
//     vector<int> p = {10, 5, 15, 7, 6, 18, 3};
//     vector<int> w = {2, 3, 5, 7, 1, 4, 1};
//     vector<pair<int, pair<int, int>>> v(7);
//     for (int i = 0; i < v.size(); i++)
//         v[i].pb({p[i] / w[i], {p[i], w[i]}});
//     sort(v.begin(), v.end(), predicate());
//     int sum = 0;
//     int l = 15;
//     for (auto i : v)
//     {
//         if (l <= 0)
//             break;
//         else
//         {
//             sum += i.second.first;
//             l -= i.second.second;
//         }
//     }
//     cout << sum;
// }
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll a;
        cin>>a;
        a--;
        int count=0;
        for(int i=1;i<=sqrtl(a);i++)
        {
            if(a%i==0)
            {
                if(a/i==i)
                count++;
                else
                count+=2;
            }
        }
        cout<<count<<endl;
    }
}