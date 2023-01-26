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

// Yaad Rakhna
// bool fun(vector<int> &v, int v1[], int idx, int n, int sum)
// {
//     if (idx == n)
//     {
//         if (sum == 2)
//         {
//             for (auto &i : v)
//                 cout << i << " ";
//             return true; // used in the fun()==true
//         }
//         else
//             return false; // backtrack
//     }
//     v.pb(v1[idx]);
//     sum += v1[idx];
//     if (fun(v, v1, idx + 1, n, sum) == true) // insert kiya aur idx badha aake badho
//         return true;
//     v.ppb();
//     sum -= v1[idx];
//     if (fun(v, v1, idx + 1, n, sum) == true) // delete kiya aur idx badha aake badho(ayesa lagega ki kuch insert hi nahi kiya)
//         return true;
//     return false;
// }
// int main()
// {
//     int v1[] = {1, 2, 1};
//     vector<int> v;
//     if (fun(v, v1, 0, 3, 0) == true)
//         return 0;
// }

// int maxScore(vector<int> &cardPoints, int k)
// {
//     int count = 0, sum = 0;
//     int i = 0, f = 1;
//     int j = cardPoints.size() - 1;
//     while (count != k)
//     {
//         if (cardPoints[i] < cardPoints[j])
//         {
//             if (f == 0)
//                 i = 0;
//             f = 1;
//             sum += cardPoints[j];
//             cardPoints.erase(cardPoints.begin() + j, cardPoints.end());
//             j -= 1;
//             count++;
//         }
//         else if (cardPoints[i] < cardPoints[j])
//         {
//             if (f == 0)
//                 j = cardPoints.size() - 1;
//             f = 1;
//             sum += cardPoints[i];
//             cardPoints.erase(cardPoints.begin(), cardPoints.begin() + i);
//             i += 1;
//             count++;
//         }
//         else
//         {
//             while (cardPoints[i] == cardPoints[j] && count != k)
//             {
//                 f = 0;
//                 count++;
//                 sum += cardPoints[i];
//                 i += 1;
//                 j -= 1;
//             }
//         }
//     }
//     return sum;
// }
string longestCommonPrefix(vector<string> &strs)
{
    map<char, int> m;
    string s;
    int ans = INT_MAX;
    for (int i = 0; i < strs.size(); i++)
    {
        if (ans > strs[i].size())
            ans = strs[i].size();
    }
    int f = 1, f1 = 1;
    for (int i = 0; i < ans; i++)
    {
        map<char, int> m;
        for (int j = 0; j < strs.size(); j++)
        {
            if (j <= strs[j].size())
            {
                m[strs[j][i]]++;
                if (m[strs[j][i]] == strs.size())
                {
                    s += strs[j][i];
                    f = 0;
                }
                else
                {
                    f1 = 0;
                    break;
                }
            }
            else
                break;
        }
        if (f == 0 && f1 == 0)
            break;
    }
    return s;
}
}
;
if (num >= 1000)
{
    s += 'M';
    num -= 1000;
}
else if (num >= 900)
{
    s += 'CM';
    num -= 900;
}
else if (num >= 500)
{
    s += 'D';
    num -= 500;
}
else if (num >= 400)
{
    s += 'CD';
    num -= 400;
}
else if (num >= 100)
{
    s += 'C';
    num -= 100;
}
else if (num >= 90)
{
    s += 'XC';
    num -= 90;
}
else if (num >= 50)
{
    s += 'L';
    num -= 50;
}
else if (num >= 40)
{
    s += 'XL';
    num -= 40;
}
else if (num >= 10)
{
    s += 'X';
    num -= 10;
}
else if (num >= 9)
{
    s += 'IX';
    num -= 9;
}
else if (num >= 5)
{
    s += 'V';
    num -= 5;
}
else if (num >= 4)
{
    s += 'IV';
    num -= 4;
}
else if (num >= 1)
{
    s += 'I';
    num -= 1;
}