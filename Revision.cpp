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
// Seletion Sort/////////////////////////
// int main()
// {
//     int arr[]={1,4,2,0,1,3,4};
//     int n=7;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
// }
// Bubble Sort////////////////////////////
// int main()
// {
// int arr[]={1,4,2,0,1,3,4};
// int n=7;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-2;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
// }
//Insertion Sort/////////////////////////
// int main()
// {
//     int arr[] = {2, 7, 4, 1, 5, 3};
//     int n = 6;
//     int i = 0, j = 1;
//     while (i < n - 1)
//     {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//                 i--;
//                 j--;
//                 if(j==0)
//                 {
//                     i++;
//                     j++;
//                 }

//             }
//         else
//         {
//             i++;
//             j++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }
//Jump Search//////////////////
// Basically jumps toward the target and when the jumping results in out of range it performs linear search
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     int n = 12;
//     int low = 0, high = 3;
//     int target = 7;
//     int jump = 0;
//     int flag = 1;
//     while (true)
//     {
//         if (target > arr[low] && target > arr[high])
//         {
//             jump++;
//             low = high;
//             high += high;
//             if (high >= n) //if out of range
//             {
//                 while (true)
//                 {
//                     if (low >= n)
//                         break;
//                     jump++;
//                     low += 1;
//                     if (arr[low] == target)
//                     {
//                         flag = 0;
//                         break;
//                     }
//                 }
//                 if (low >= n)
//                 {
//                     cout << "NO";
//                     break;
//                 }
//                 if (flag == 0){
//                     cout<<"YES";
//                     break;}
//             }
//             if (target == arr[high])
//             { // if we got the answer in range
//                 cout << "YES" << endl;
//                 break;
//             }
//         }
//         else if (target > arr[low] && target < arr[high])
//         {
//             jump++;
//             low += 1;
//             if (arr[low] == target)
//             {
//                 cout << "YES" << endl;
//                 break;
//             }
//         }
//     }
// }
// int main()
// {
//     ll n;
//     cin>>n;
//     while (n--)
//     {
//         ll m;
//         cin>>m;
//         vLL v;
//         fo(i,0,m)
//         {
//             ll ele;
//             cin>>ele;
//             v.pb(ele);
//         }
//         vLL v1;
//         fo(i,0,v.size())
//         {
//             if(v[i]==0)
//             v1[i]=v[i]+1;
//             else
//             v1[i]=v[i]-1;
//         }
//         fo(i,0,v1.size())
//         cout<<v1[i]<<" ";
//         cout<<endl;
//     }

// }
// int main()
// {
//     string s = "a,b,c,d,e,f,g";
//     string s1 = "d,e,f";
//     int j = 0;
//     int flag=0;
//     fo(i, 0, s.length())
//     {
//         if (s[i] == s1[j])
//         {
//             while (j < s1.length() && i < s.length())
//             {
//                 i++;
//                 j++;
//                 if(j==s1.length()){
//                 cout<<"YES";
//                 flag=1;
//                 break;}
//                 if (s[i] != s1[j])
//                 {
//                     j = 0;
//                     break;
//                 }
//             }
//         }
//     }
//     if(!flag)
//     cout<<"NO";
// }
// int main()
// {
//     int ans=-1;
//     int N=5;
//     int mat[N][N] = {{ 1, 2, -1, -4, -20 },
//              { -8, -3, 4, 2, 1 },
//              { 3, 8, 6, 1, 3 },
//              { -4, -1, 1, 7, -6 },
//              { 0, -4, 10, -5, 1 }};
//     int c,d;
//     for(int i=0;i<N;i++)
//     {
//         for(int j=0;j<N;j++)
//         {
//             if(ans<mat[i][j])
//             {
//                 ans=mat[i][j];
//                 c=i;
//                 d=j;
//             }
//         }
//     }
//     int ans1 = INT_MAX;
//     for(int i=0;i<N;i++)
//     {
//         for(int j=0;j<N;j++)
//         {
//             if(i<c&&j<d)
//                 ans1=min(ans1,mat[i][j]);
//         }
//     }
//     cout<<ans-ans1;
// }
// int main()
// {
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int b[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//             b[j][i]=a[i][j];
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//             b[i][j]=a[i][3-j-1];
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<b[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int mat[4][5] = { {1, 2, 1, 4, 8},
//                       {3, 7, 8, 5, 1},
//                       {8, 7, 7, 3, 1},
//                       {8, 1, 2, 7, 9},
//     };
//     map<int,int> m;
//     vector<int> v;
//     int c = 0, d = 0, count = 0;
//     int e=0;
//     while (d<5)
//     {
//         for (int i = 1; i < 4; i++)
//         {
//             for (int j = 0; j < 5; j++)
//             {
//                 if (mat[c][d] == mat[i][j])
//                 {
//                     count++ ;
//                     break;
//                 }
//             }
//         }
//         if(count==3)
//         {
//             v.pb(mat[c][d]);
//             m[v[e]]++;
//             e++;
//         }
//         count=0;
//         d++;
//     }
//     for(auto i:m)
//     cout<<i.first<<" ";
// }
// int main()
// {
//     int matrix[3][3] = { {1, 2, 3},
//                      {4, 5, 6}, {7, 8, 9} };
//     int matrix1[3][3]={0};
//     int matrix2[3][3]={0};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//             matrix1[j][i]=matrix[i][j];
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         matrix2[j][i]=matrix1[i][j];
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         matrix2[i][j]=matrix1[i][3-j-1];
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         cout<<matrix2[i][j]<<" ";
//     cout<<endl;
//     }
// }
// int main()
// {
//     if (nums1.size() != 0)
//     {
//         for (int i = 0; i < nums1.size(); i++)
//             v1.push_back(nums1[i]);
//     }
//     if (nums2.size() != 0)
//     {
//         for (int i = 0; i < nums2.size(); i++)
//             v1.push_back(nums2[i]);
//     }
//     sort(v1.begin(), v1.end());
//     v1.at((v1.size() - 1) / 2) = c;
//     v1.at(((v1.size() - 1) / 2) + 1) = d;
//     if (v1.size() % 2 != 0)
//         cout<< v1.at(c);
//     else
//         cout<< v1.at((c + d) / 2);
// }

// int main()
// {
//     fastio
//     ll n;cin>>n;
//     while(n--)
//     {
//         ll X,Y;
//         cin>>X>>Y;
//         string s;
//         cin>>s;
//         ll count=0,count1=0,ans=-1;
//         fo(i,0,s.length())
//         {
//             if(s[i]=='1')
//             count++;
//         }
//         fo(i,0,s.length())
//         {
//             if(s[i]=='1')
//             count1++;
//             else
//             count1=0;
//             ans=max(ans,count1);
//         }
//        cout<<(X*count)+(Y*ans)<<endl;
//     }
// }

// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll m;
//         cin >> m;
//         string s;
//         cin >> s;
//         ll flag = 0;
//         fo(i, 1, m)
//         {
//             if (s[i] == 'L' && s[i] == 'L' || s[i] == 'R' && s[i] == 'R')
//             {
//                 cout << "YES" << endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if (!flag)
//             cout << "NO" << endl;
//     }
// }
// int main()
// {
//     string S;
//     cin >> S;
//     int flag = 1;
//     for (int i = 0; i < S.length(); i++)
//     {
//         if((stoi(S[i])%10==0)
//             flag=0;
//         if(flag==1)
//         {
//             sort(S.begin(), S.end(), greater<char>());
//             cout << S;
//         }
//         else{
//             sort(S.begin(), S.end(), greater<char>());
//             for (int i = 0; i < S.length(); i++)
//             {
//                 if (stoi(S[S.length() - i - 1]) % 10 == 0)
//                 {
//                 }
//             }
//         }
//     }
// }
// class Solution
// {
// public:
//     string LargestEven(string S)
//     {
//         //complete the function here
//         int flag = 1;
//         for (int i = 0; i < S.length(); i++)
//         {
//             if (int(S[i]) % 10 == 0)
//                 flag = 0;
//         }
//         if (flag == 1)
//         {
//             for (int i = 0; i < S.length(); i++)
//                 S[i] = char(S[i]);
//             sort(S.begin(), S.end(), greater<char>());
//             return S;
//         }
//         else
//         {
//             sort(S.begin(), S.end(), greater<char>());
//             for (int i = 0; i < S.length(); i++)
//             {
//                 if (int(S[S.length() - i - 1]) % 10 == 0)
//                 {
//                     S[S.length() - i - 1] = char(S[S.length() - i - 1]);
//                     char b = S[S.length() - 1];
//                     S[S.length() - 1] = S[S.length() - i - 1];
//                     S[S.length() - i - 1] = b;
//                     break;
//                 }
//             }
//             return S;
//         }
//     }
// };
// int main()
// {
//     fastio
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         vLL v;
//         ll n1;
//         cin>>n1;
//         for(int i=0;i<n1;i++)
//         {
//             ll ele;cin>>ele;
//             v.pb(ele);
//         }
//         ll c=v.size();
//         fo(i,1,v.size())
//         {
//             if(v[i]>0 && v[i-1]<0 || v[i]<0 && v[i-1]>0)
//             cout<<c<<" ";
//             else
//             cout<<"1"<<" ";
//             c-=1;
//         }
//         cout<<"1"<<endl;
//     }
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a;cin>>a;
//         if(a==1 || a==2)
//         cout<<"1"<<endl;
//         else
//         cout<<a*(a-3)+3<<endl;
//     }
// }
int main()
{
    int a[5] = {1, 4, 2, 3, 5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5 - 1; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}