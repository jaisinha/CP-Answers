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
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     vector<int> v(n);
// //     vector<int> v1;
// //     stack<int> st;
// //     for (auto &i : v)
// //         cin >> i;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (st.empty())
// //             v1.pb(-1);
// //         else
// //         {
// //             if (st.top() > v[i])
// //                 v1.pb(st.top());
// //             else
// //             {
// //                 while (!st.empty() && v[i] >= st.top())
// //                     st.pop();
// //                 if (st.empty()) // it should come first wanrna no output
// //                     v1.pb(v[i]);
// //                 else
// //                     v1.pb(st.top());
// //             }
// //         }
// //         st.push(v[i]);
// //     }
// //     // reverse(v1.begin(), v1.end());
// //     vector<int> v1(n);
// //     vector<int> v1;
// //     stack<int> st;
// //     for (auto &i : v)
// //         cin >> i;
// //     for (int i = n-1; i >= 0; i--)
// //     {
// //         if (st.empty())
// //             v1.pb(-1);
// //         else
// //         {
// //             if (st.top() < v[i])
// //                 v1.pb(st.top());
// //             else
// //             {
// //                 while (!st.empty() && v[i] <= st.top())
// //                     st.pop();
// //                 if (st.empty())
// //                     v1.pb(-1);
// //                 else if (v[i] > st.top())
// //                     v1.pb(st.top());
// //             }
// //         }
// //         st.push(v[i]);
// //     }
// // }
// int main()
// {
//     ll n;
//     cin>>n;
//     while(n--){
//     ll n1,count=0;
//     vector<ll> v(n1);
//     for(auto &i:v)
//     cin>>i;
//     for(int i=0;i<n1;i++)
//     {
//         if(v[i]%2!=0)
//         count++;
//     }
//     if(count>0)
//     cout<<count/2<<endl;
//     else
//     cout<<"0"<<endl;
// }
// class Solution {
// public:
//     string multiply(string num1, string num2) {
//         int n1=0;
//         string st1="";
//         string s;
//         string st="";
//         for(int i=0;i<num1.size();i++)
//         {
//             for(int k=0;k<i;k++)
//                 s.push_back(0);
//             for(int j=0;j<num1.size();j++)
//             {
//                 int n=(int)num1[i]*(int)num2[j];
//                 n+=n1;
//                 if(j!=n-1)
//                 n1=n/10;
//                 s.push_back(u_char(n1));
//             }
//             s.reverse(s.begin(),s.end());
//             st1.append(s);
//             for(int i=0;i<s.size();i++)
//             {
//             if(i>=st1.length())
//                 st+=to_string(s[i]);
//             else
//             st+=to_string(s[i]+st1[i]);
//             }
//             s.erase();
//         }
//      return st;
//     }
// };
// int main()
// {
//     ll n;cin>>n;
//     while(n--)
//     {
//         ll a,b,c;
//         cin>>a>>b>>c;
//         int d=((a+c)-2*b);
//         int count=0;
//         while(true)
//         {
//             if((a+c)-2*b==0)
//             break;
//             a+=1;
//             b-=1;
//             count++;
//         }
//     cout<<count<<endl;
//     }
// }
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
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     vector<int> v(n);
// //     vector<int> v1;
// //     stack<int> st;
// //     for (auto &i : v)
// //         cin >> i;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (st.empty())
// //             v1.pb(-1);
// //         else
// //         {
// //             if (st.top() > v[i])
// //                 v1.pb(st.top());
// //             else
// //             {
// //                 while (!st.empty() && v[i] >= st.top())
// //                     st.pop();
// //                 if (st.empty()) // it should come first wanrna no output
// //                     v1.pb(v[i]);
// //                 else
// //                     v1.pb(st.top());
// //             }
// //         }
// //         st.push(v[i]);
// //     }
// //     // reverse(v1.begin(), v1.end());
// //     vector<int> v1(n);
// //     vector<int> v1;
// //     stack<int> st;
// //     for (auto &i : v)
// //         cin >> i;
// //     for (int i = n-1; i >= 0; i--)
// //     {
// //         if (st.empty())
// //             v1.pb(-1);
// //         else
// //         {
// //             if (st.top() < v[i])
// //                 v1.pb(st.top());
// //             else
// //             {
// //                 while (!st.empty() && v[i] <= st.top())
// //                     st.pop();
// //                 if (st.empty())
// //                     v1.pb(-1);
// //                 else if (v[i] > st.top())
// //                     v1.pb(st.top());
// //             }
// //         }
// //         st.push(v[i]);
// //     }
// // }
// int main()
// {
//     ll n;
//     cin>>n;
//     while(n--){
//     ll n1,count=0;
//     vector<ll> v(n1);
//     for(auto &i:v)
//     cin>>i;
//     for(int i=0;i<n1;i++)
//     {
//         if(v[i]%2!=0)
//         count++;
//     }
//     if(count>0)
//     cout<<count/2<<endl;
//     else
//     cout<<"0"<<endl;
// }
// class Solution {
// public:
//     string multiply(string num1, string num2) {
//         int n1=0;
//         string st1="";
//         string s;
//         string st="";
//         for(int i=0;i<num1.size();i++)
//         {
//             for(int k=0;k<i;k++)
//                 s.push_back(0);
//             for(int j=0;j<num1.size();j++)
//             {
//                 int n=(int)num1[i]*(int)num2[j];
//                 n+=n1;
//                 if(j!=n-1)
//                 n1=n/10;
//                 s.push_back(u_char(n1));
//             }
//             s.reverse(s.begin(),s.end());
//             st1.append(s);
//             for(int i=0;i<s.size();i++)
//             {
//             if(i>=st1.length())
//                 st+=to_string(s[i]);
//             else
//             st+=to_string(s[i]+st1[i]);
//             }
//             s.erase();
//         }
//      return st;
//     }
// };
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a, b, c;
//         cin >> a >> b >> c;
//         if (((a+c)-2*b)%3==0)
//         cout<<"0"<<endl;
//         else
//         cout<<"1"<<endl;
//     }
// }
bool istrue(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
        return true;
    return false;
}
bool ratinmaze(int **arr, int x, int y, int n, int **arr1)
{
    if(x==n-1 && y==n-1){
    arr1[x][y]=1;
    return true;}
    if (istrue(arr,x,y,n))
    {
        arr1[x][y] = 1;
        if (ratinmaze(arr, x + 1, y, n, arr1))
            return true;
        if (ratinmaze(arr, x, y + 1, n, arr1))
            return true;
    arr1[x][y] = 0;
    return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n]; // 
    for (int i = 0; i < n; i++)
        arr[i]=new int[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j  < n; j++)
        cin>>arr[i][j];
    } 
    int ** arr1=new int*[n];
    for (int i = 0; i < n; i++){
    arr1[i]=new int[n];
    for (int j = 0; j < n; j++)
    arr1[i][j]=0;}
    cout<<endl;
    if(ratinmaze(arr,0,0,n,arr1))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<arr1[i][j]<<" ";
        cout<<endl;
        }
    }
}