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
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// void merge(int a[], int start, int end, int mid)
// {
//     int n = mid - start + 1;
//     int m = end - mid;
//     int a1[n];
//     int a2[m];
//     for (int i = 0; i < n; i++)
//         a1[i] = a[start + i];
//     for (int j = 0; j < m; j++)
//         a2[j] = a[mid + 1 + j];
//     int i = 0, j = 0, k = start;
//     while (i < n && j < m)
//     {
//         if (a1[i] <= a2[j])
//         {
//             a[k] = a1[i];
//             i += 1;
//         }
//         else if (a1[i] > a2[j])
//         {
//             a[k] = a1[j];
//             j += 1;
//         }
//         k++;
//     }
//     while (i < n)
//     {
//         a[k] = a1[i];
//         i += 1;
//         k++;
//     }
//     while (j < m)
//     {
//         a[k] = a1[j];
//         j += 1;
//         k++;
//     }
// }
// void mergesort(int a[], int l, int h)
// {
//     int start = 0, end = 5;
//     while (l < h)
//     {
//         int mid = (start + end) / 2;
//         merge(a, start, end, mid);
//         mergesort(a, l, mid);
//         mergesort(a, mid + 1, h);
//     }
// }
// int main()
// {
//     int a[6] = {5, 4, 3, 2, 1, 0};
//     int l = 0, h = 6;
//     mergesort(a, l, h);
//     fo(i, 0, 6)
//             cout
//         << a[i] << " ";
// }
// while (l<h)
// {
//     /* code */
//     int mid=(l+h)/2;
//     merge(l,h,mid);
//     mergesort(l,mid,a);
//     mergesort(mid+1,h,a);
// }
// int a1[mid-start+1];
// int a2[mid-end];
// for(int i=0;i<n;i++)
// {
//     a1[i]a[start+i];
// }
// for(int i=0;i<m;i++)
// {
//     a1[i]a[mid+i+1];
// }
void conquer(int a[], int l, int h, int mid)
{
    int n1 = mid - l;
    int n2 = h - mid - 1;
    int a1[n1];
    int a2[n2];
    fo(i, 0, n1)
        a1[i] = a[l + i];
    fo(i, 0, n2)
        a2[i] = a[mid + 1 + i];
    int k = l;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            a[k] = a1[i];
            i += 1;
        }
        else
        {
            a[k] = a2[j];
            j += 1;
        }
        k += 1;
    }
    while (i < n1)
    {
        a[i] = a1[i];
        i += 1;
        k += 1;
    }
    while (j < n2)
    {
        a[j] = a2[j];
        j += 1;
        k += 1;
    }
    fo(i, 0, 10)
            cout
        << a[i] << " ";
}
void divide(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        divide(a, l, mid);
        divide(a, mid + 1, h);
        conquer(a, l, h, mid);
    }
}
int main()
{
    int a[10];
    fo(i, 0, 10)
            cin >>
        a[i];
    divide(a, 0, 10);
}