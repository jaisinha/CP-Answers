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
// bool arrSort(int a[],int n)
// {
//     if(a[0]>a[1])
//     return false;
//     if(a==n-1)
//     return true;
//      arrSort(a[0]<a[1],a+1);
// }
// int main()
// {
//     int a[7]={1,4,3,2,4,5,7};
//     cout<<arrSort(a,7);
// }
// void stRev(stack<int> st, int head, int count)
// {
//     if (st.empty())
//         return ;
//     count++;
//     if (count == 1)
//         stRev(st, st.top(), count);
//     else
//     {
//         st.pop();
//         stRev(st, st.top(), count);
//     }

// }
// int main()
// {
//     fastio int a[5] = {1, 2, 3, 4, 5};
//     stack<int> st;
//     fo(i, 0, 5)
//         st.push(a[i]);
//     stRev(st, 0, 0);
// }
// bool threesome(int a[],int start,int end,int n,int sum)
// {
//     ll flag=1;
//     for(int i=1;i<n;i++)
//     {
//         sum-=a[i-1];
//         start=i;
//         ll c=i;
//         for(int i=c;i<n;i++)
//         {
//             if(a[start]+a[end]>sum)
//             end-=1;
//             else if(a[start]+a[end]<sum)
//             start+=1;
//             else
//             flag=0;
//         }
//         if(flag==0)
//         return true;
//         sum+=a[i-1];
//     }
//     return false;
// }
// int main()
// {
//     ll sum=11;
//     int a[6]={1,2,3,4,5,6};
//     ll start=0,end=5;
//     cout<<threesome(a,start,end,6,sum);
// }
// Brute Force
// int main()
// {
//     string s;
//     cin >> s;
//     ll count = 1, ans = -1;
//     for (int i = 0; i < s.length(); i++)
//     {
//         for (int j = i; j < s.length(); j++)
//         {
//             if (i != j)
//             {
//                 if (s[i] == s[j])
//                 {
//                     ans = max(ans, count);
//                     count = 1;
//                     break;
//                 }
//                 else
//                 {
//                     if(j==(s.length()-1))
//                     count=1;
//                     else
//                         count++;
//                 }
//             }
//         }
//     }
//     cout<<ans<<" ";
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Sorting using Recursion
// void sorting(vector<int> &v,int idx,int n,int j)
// {
//     if(idx==n)
//     return;
//     else if(v[j]>v[idx])
//     {
//         int temp=v[j];
//         v[j]=v[idx];
//         v[idx]=temp;
//     }
//     sorting(v,idx+1,n,j);
//     j+=1;
//     idx=j;
//     if(j==n)
//     return;
//     sorting(v,idx+1,n,j);
//     for(int i=0;i<n;i++)
//     cout<<v[i]<<" ";
//     exit(0);
// }
// int main()
// {
//     vector<int> v(7) ;
//     for(auto &i:v)
//     cin>>i;
//     sorting(v,1,7,0);
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// insertion of an element in a vector with the help of recursion
// void insertion(int key,vector<int> &v,int n,int idx)
// {
//     if(idx==n)
//     return;
//     else if(key>v[idx]&& key<v[idx+1])
//         v.insert(v.begin()+idx+1,key);
//     insertion(key,v,n,idx+1);
//     for(int i=0;i<v.size();i++)
//     cout<<v[i]<<" ";
//     exit(0);
// }
// int main()
// {
//     vector<int> v(5);
//     for(auto &i:v)
//     cin>>i;
//     insertion(4,v,5,0);
// }
// Brute + optimized approch
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// int redun(string s)
// {
//     int count = 0, count1 = 0;
//     for (int i = 1; i < s.length(); i++)
//     {
//         if (s[i] == '(' && s[i - 1] == '(')
//             count++;
//         else if (s[i] == ')' && s[i - 1] == ')')
//             count1++;
//     }
//     if (count == count1)
//         return count;
//    else if(count == 0 || count1==0)
//     return 0;
//     return abs(count - count1);
// }
// int main()
// {
//     string s = "(((((A+B)+B)+C)))";
//     cout << redun(s);
// }
int main()
{
    stack<char> st;
    string s = "(((A+(A+(A+B)))))";
    int count = 0, count1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
            cout << "Empty Stack" << endl;
        else
        {
            if (st.top() == '(' && s[i] == '(')
                count++;
            else if (st.top() == ')' && s[i] == ')')
                count1++;
        }
        st.push(s[i]);
    }
    if (count == count1)
        cout << count;
    else if (count == 0 || count1 == 0)
        cout << "0";
    else
        cout << abs(count - count1);
}