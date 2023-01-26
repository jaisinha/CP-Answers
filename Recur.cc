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
#define MOD 1000000007
#define TEST(t) \
    int tc;     \
    cin >> tc;  \
    fo(t, 0, tc)
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
// int occ(int a[],int n,int i,int key)
// {
//     if(i==n)
//     return -1;
//     if(a[i]==key)
//     return i;
//     return occ(a,n,i+1,key);
// }
// int main()
// {
//     int a[]={4,2,1,2,5,2,7};
//     cout<<occ(a,7,0,10);
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int firstocc(int arr[],int n,int key,int i)
// {
//     if(i==n)
//     return -1;
//     if(arr[i]==key)
//     return i;
//     return firstocc(arr,n,key,i++);
// }
// int main(){
//     int arr[]={13,2,3,4,5};
//     cout<<firstocc(arr,5,4,0);
// }
//Check weather the given array is sorted or not
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int sorted(int arr[],int n)
// {
//     if(n==1)
//     return 1;
//     if(arr[n-2]<arr[n-1])
//     return sorted(arr,n-1);
//     return 0;
// }
// int main(){
//     int arr[]={13,2,3,4,5};
//     cout<<sorted(arr,5);
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int firstocc(int arr[],int n,int key,int i)
// {
//     if(i==0)
//     return -1;
//     if(arr[i]==key)
//     return i;
//     return firstocc(arr,n,key,i-=1);
// }
// int main(){
//     int arr[]={13,2,3,4,9,4,5};
//     cout<<firstocc(arr,5,4,4);
// }
// int main()
// {
//     ll n1;
//     cin >> n1;
//     while (n1--)
//     {
//         ll n =1e9;
//         ll k, q;
//         cin >> k >> q;
//         int a[n];
//         for (ll i = 1; i <= n; i++)
//             a[i] = 0;
//         for (ll i = 2; i <= n; i++)
//         {
//             if (a[i] == 0)
//             {
//                 for (ll j = 2; j * i <= n; j++)
//                     a[i * j] = 1;
//             }
//         }
//         for (ll i = k; i <= q; i++)
//         {
//             if (i == 1)
//                 i += 1;
//             if (a[i] == 0)
//             {
//                 cout << i << endl;
//                 a[i] = 1;
//             }
//         }
//         cout << endl;
//     }
// }
int main()
{
    ll n;
    cin>>n;
    ll fac=1;
    for(int i=2;i<=n;i++)
    {
        fac=fac*i;
    }
    cout<<fac;
}