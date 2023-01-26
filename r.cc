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
// int main()
// {
//     ll n1;
//     cin >> n1;
//     while (n1--)
//     {
//         ll n;
//         cin >> n;
//         vLL v;
//         ll i = 1;
//         while (v.size() != n)
//         {
//             if ((i % 10 != 3) && (i % 3 != 0))
//                 v.pb(i);
//             i++;
//         }
//         cout << v[v.size() - 1] << endl;
//     }
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         int64_t a;
//         cin >> a;
//         vector<int64_t> v;
//         int64_t flag = 1, count = 0;
//         int64_t n1=sqrt(a);
//         for (int64_t i = 1; i <= n1; i++)
//         {
//             if (n1 % i == 0)
//             {
//                 count++;
//                 v.pb(i);
//             }
//         }
//         if (count != 3)
//             flag = 0;
//         map<int64_t, int> m;
//         for (int64_t i = 0; i < v.size(); i++)
//         {
//             ll c=v[i];
//             m[c]++;
//             if (m[c] > 1)
//                 flag = 0;
//         }
//         if (flag == 1)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
// }
// int main()
// {
//         ll n1;
//         cin >> n1;
//         if (n1 <= 2)
//                 cout << "-1";
//         else
//         {
//                 ll n;
//                 for (int64_t i = 1; i <= INT_MAX; i++)
//                 {
//                         if (i % 210==0)
//                         {
//                                 ll count = 0;
//                                 n = i;
//                                 do
//                                 {
//                                         n /= 10;
//                                         count++;
//                                 } while (n != 0);
//                                 if (count == n1)
//                                 {
//                                         cout << i;
//                                         break;
//                                 }
//                         }
//                 }
//         }
// }
// // int main()
// // {
// //     ll n;
// //     cin >> n;
// //     string s;
// //     cin >> s;
// //     map<char, int> m;
// //     vector<char> v;
// //     fo(i, 0, s.length())
// //     {
// //         char d=s[i];
// //         ll c = m[d]++;
// //         cout<<c;
// //         if (c == n)
// //             v.pb(d);
// //         cout<<endl;
// //         cout<<v[i];
// //     }
// //     if(v.size()==1)
// //     cout<<v[0];
// //     else if ((s.length() % v.size())==0)
// //     {
// //         for (int i = 1; i <= s.length(); i++)
// //         {
// //             if (s[i - 1] == s[i])
// //             {
// //                 char temp = s[i];
// //                 s[i] = s[i + 1];
// //                 s[i + 1] = temp;
//             }
//         }
//         // fo(i, 0, s.length())
//         // cout<<s[i];
//     }
//     else
//         cout << "-1";
// }
// int main()
// {
//     ll a,b;
//     cin>>a>>b;
//     ll sum=0;
//     for(int i=0;i<b;i++)
//     {
//     ll ele;cin>>ele;
//     sum+=ele;
//     }
//     if(a==sum)
//     cout<<sum+1<<" "<<sum+1;
//     else{
//          if(a<sum)
//          cout<<sum+1<<" "<<sum;
//          else
//          cout<<sum<<" "<<sum+1;
//     }
// }
// int main()
// {
//     ll n;cin>>n;
//     while (n--)
//     {
//         ll count=0,count1=0;
//         ll a,b,c,d,e,f;
//         cin>>a>>b>>c;
//         if(a==1)
//         count++;
//         if(b==1)
//         count++;
//         if(c==1)
//         count++;
//         cin>>d>>e>>f;
//         if(d==1)
//         count1++;
//         if(e==1)
//         count1++;
//         if(f==1)
//         count1++;
//         if(count==count1)
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         vLL v;
//         // vLL v1;
//         fo(i, 0, a)
//         {
//             ll ele;
//             cin >> ele;
//             v.pb(ele);
//         }
//         ll i = 0;
//         int c = v.size();
//         int d=a*b-a;
//         while (d--)
//         {
//             v.pb(v[i]);
//             i++;
//             if (i == c)
//                 i = 0;
//         }
//         int sum = 0, totsum = 0, flag = 0;
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (v[i] > 0)
//                 flag = 1;
//         }
//         if (flag == 0)
//         {
//             sort(v.begin(), v.end(), greater<int>());
//             totsum = v[0];
//         }
//         else
//         {
//             for (int i = 0; i < v.size(); i++)
//             {
//                 sum += v[i];
//                 if (totsum < sum)
//                     totsum = sum;
//                 if (sum < 0)
//                     sum = 0;
//             }
//         }
//         cout << totsum << endl;
//     }
// }
// int main()
// {
//     string s;
//     cin >> s;
//     map<char, int> m;
//     int r = s[s.length() / 2];
//     fo(i, 0, s.length())
//         m[s[i]]++;
//     int count = 0;
//     vector<string> v;
//     for (auto it : m)
//     {
//         if (it.second == 1)
//         {
//             v.pb(it.first);
//             if (it.first != r)
//                 count++;
//         }
//     }
//     if (v.size() != count)
//     {
//         if (count % 2 == 0)
//             cout << "First";
//         else
//             cout << "Second";
//     }
//     else
//     {
//         if (count % 2 != 0)
//             cout << "First";
//         else
//             cout << "Second";
//     }
// }
// int main()
// {
//     ll n1;
//     cin >> n1;
//     while (n1--)
//     {
//         ll n, k;
//         cin >> n >> k;
//         vLL v;
//         for (int i = 0; i <= n / 2; i++)
//             v.pb(i + 1);
//         ll flag = 1;
//         fo(i, 1, v.size())
//         {
//             fo(j, 1, v.size())
//             {
//                 if (3 * v[i - 1] == n)
//                 {
//                     if (v[i - 1] * v[i - 1] * v[i - 1] <= n / 2)
//                     {
//                         cout << v[i - 1] << " " << v[i - 1] << " " << v[i - 1];
//                         cout << endl;
//                         flag = 0;
//                         break;
//                     }
//                 }
//                 else if (v[i - 1] + (2 * v[j - 1]) == n)
//                 {
//                     if (v[i - 1] * v[j - 1] * v[j - 1] <= n / 2)
//                     {
//                         cout << v[i - 1] << " " << v[j - 1] << " " << v[j - 1];
//                         cout << endl;
//                         flag = 0;
//                         break;
//                     }
//                 }
//                 else if (v[i - 1] + v[j - 1] + v[j] == n)
//                 {
//                     if (v[i - 1] * v[j - 1] * v[j] <= n / 2)
//                     {
//                         cout << v[i - 1] << " " << v[j - 1] << " " << v[j];
//                         flag = 0;
//                         cout << endl;
//                         break;
//                     }
//                 }
//             }
//             if (flag == 0)
//                 break;
//         }
//     }
// }
// int main()
// {
//     ll n;cin>>n;
//     while(n--)
//     {
//         ll a,b;
//         cin>>a>>b;
//         int A[]={0};
//         if(a==1)
//         a+=1;
//         for(ll i=1;i<=1e9;i++)
//         {
//             A[i]=1;
//             if(A[i]==1)
//             {
//               for(int j=2;j*i<=b;j++)
//                   A[i*j]=1;

//             }
//         }
//         for(int i=a;i<=b;i++)
//         {
//             if(A[i]==0)
//             cout<<A[i]<<endl;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;cin>>n;
//     while(n--)
//     {
//         ll a,b;
//         cin>>a>>b;
//         vLL v;
//         for(int i=0;i<a/2;i++)
//         v.pb(i+1);
//         ll flag=1;
//         for(int i=0;i<v.size();i++)
//         {
//             flag=1;
//             for(int j=1;j<v.size();j++)
//             {
//                 if(3*v[j-1]==b)
//                 {
//                     if(v[j-1]<=a/2){
//                     cout<<v[j-1]<<" "<<v[j-1]<<" "<<v[j-1]<<endl;
//                     flag=0;}
//                 }
//                 else if(v[i]+(2*v[j-1])==b){
//                    if(v[i]*v[j-1]<=a/2){
//                    cout<<v[i]<<" "<<v[j-1]<<" "<<v[j-1]<<endl;
//                    flag=0;}
//                 }
//                 else if(v[i]+v[j-1]+v[j-1]==b)
//                 {
//                     if(v[i]*v[j-1]*v[j-1]<=a/2){
//                     cout<<v[i]<<" "<<v[j-1]<<" "<<v[j-1]<<endl;
//                     flag=0;}
//                 }
//                 if(flag==0)
//                 break;
//             }
//             if(flag==0)
//                 break;
//         }
//     }
// }
// int main()
// {
//     fastio
//     ll n;cin>>n;
//     while(n--)
//     {
//       int a;cin>>a;
//       if(a==1)
//       cout<<"3"<<endl;
//       else if(a==2)
//       cout<<"15"<<endl;
//       else
//       {
//           for(int i=0;i<a;i++)
//           cout<<"3";
//           cout<<endl;
//       }
//     }
// }
// int main()
// {
//     fastio
//         ll n;
//     cin >> n;
//     while (n--)
//     {
//         vLL v;
//         vLL v1;
//         vLL v2;
//         fo(i, 0, v.size())
//         {
//             ll ele;
//             cin >> ele;
//             v.pb(ele);
//         }
//         fo(i, 0, v1.size())
//         {
//             ll ele;
//             cin >> ele;
//             v1.pb(ele);
//         }
//         ll sum = 0;
//         fo(i, 0, v.size())
//         {
//             sum += (v[i] * 20);
//             v2.pb(v[i] * 20);
//             if (sum > 240)
//                 break;
//         }
//         int c = v2[v2.size() - 1];
//         v2.erase(v2.begin() + v2[v2.size() - 1]);
//         v2.pb(c - (sum - 240));
//         sum = 0;
//         fo(i, 0, v2.size())
//         {
//             if (i == v2.size() - 1)
//                 sum += (v1[i] * (v2[v2.size() - 1] / v[v.size() - 1]));
//             else
//                 sum += v1[i] * 20;
//         }
//         cout << sum << endl;
//     }
// }
// int main()
// {
//     ll a;cin>>a;
//     while(a--)
//     {
//         int a1;cin>>a1;
//         string s;cin>>s;
//         ll flag=1;
//         if(a1==1)
//         cout<<"-1"<<" "<<"-1"<<endl;
//         else
//         {
//             fo(i,0,s.length())
//             {
//                 if(s[i]=='a'&&s[i+1]=='b' || s[i]=='b'&&s[i]=='a'){
//                 cout<<i+1<<" "<<i+2<<endl;
//                 flag=0;
//                 break;}
//             }
//             if(flag==1)
//             cout<<"-1"<<" "<<"-1"<<endl;
//         }
//     }
// }
// int main()
// {
//     string s1;
//     cin >> s1;
//     vector<char> s;
//     fo(i, 0, s1.length())
//         s.pb(s1[i]);
//     ll i = 0;
//     ll count = 0;
//     while (i < s.size())
//     {
//         if (s[i] != s[s.size() - i - 1])
//         {
//             s.erase(s.begin() + i);
//             count++;
//         }
//         else
//             i++;
//     }
//     if(count%2==0)
//     cout<<"First"<<endl;
//     else
//     cout<<"Second"<<endl;
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     vLL v;
//     vLL v1;
//     fo(i, 0, n)
//     {
//         ll ele;
//         cin >> ele;
//         v.pb(ele);
//     }
//     if (n == 1)
//     {
//         cout << v.size() << endl;
//         cout << v[0] << " " << 0 << endl;
//     }
//     else
//     {
//         ll flag = 1;
//         ll n1 = v.size();
//         ll a[n1] = {0};
//         ll i = 0, j = 1;
//         while (true)
//         {
//             if (v[i] == v[j])
//             {
//                 if (a[v[i]] == 0)
//                 {
//                     v1.pb(v[i]);
//                     a[i] = 1;
//                     v.pb(j - i);
//                     j++;
//                     cout<<v1[i]<<" ";
//                 }
//                 else
//                 {
//                     if(i==v.size()-1)
//                     break;
//                     else
//                     i++;
//                 }
//             }
//             else
//                 j++;
//             if (j == v.size() - 1)
//             {
//                 if (a[v[i]] == 0)
//                     v.pb(0);
//                 i++;
//                 if (i == v.size() - 1)
//                     break;
//                 else if(i != v.size() - 1)
//                     j = i + 1;
//             }
//         }
//         cout << v1.size() << endl;
//         for (int i = 0; i < v1.size(); i++)
//             cout << v1[i] << " " << v[i] << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         ll a, b, c;
//         cin >> a >> b >> c;
//         ll d, e, f;
//         cin >> d >> e >> f;
//         ll sum = 0, sum1 = 0, sum2 = 0;
//         ll flag = 1;
//         if (flag == 1)
//         {
//             sum1 += (a * 20);
//             if (sum1 <= 240)
//             {
//                 sum = sum1;
//                 sum2 += (d * 20);
//             }
//             else
//             {
//                 sum2 += (d * (240 - sum)/a);
//                 cout << sum2 << endl;
//                 flag = 0;
//             }
//         }
//         if (flag == 1)
//         {
//             sum1 += (b * 20);
//             if (sum1 <= 240)
//             {
//                 sum = sum1;
//                 sum2 += (e * 20);
//             }
//             else
//             {
//                 sum2 += (e * (240 - sum) / b);
//                 cout << sum2 << endl;
//                 flag = 0;
//             }
//         }
//         if (flag == 1)
//         {
//             sum1 += (c * 20);
//             if (sum1 <= 240)
//             {
//                 sum = sum1;
//                 sum2 += (f * 20);
//             }
//             else
//             {
//                 sum2 += (f * (240 - sum) / c);
//                 cout << sum2 << endl;
//                 flag = 0;
//             }
//         }
//         if(flag==1)
//         cout<<sum2<<endl;
//     }
// }
//////////////////////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\
// int main()
// {
//     ll n;cin>>n;
//     while(n--)
//     {
//         ll a;
//         cin>>a;
//         vLL v;
//         vLL v1;
//         vLL v2;
//         if(a%4==0)
//         {
//             cout<<"YES"<<endl;
//            fo(i,0,a)
//            v2.pb(i+1);
//            ll count=0;
//            ll i=0;
//            while(true)
//            {
//                v.pb(v2[i+(a/4)]);
//                v2.erase(v2.begin()+i+(a/4));
//                count++;
//                if(count==a/2)
//                break;
//            }
//            fo(i,0,v2.size())
//            cout<<v2[i]<<" ";
//            cout<<endl;
//            fo(i,0,v.size())
//            cout<<v[i]<<" ";
//         }
//         else
//         cout<<"NO"<<endl;
//     }
// }
/////////////\\/\/\\/\/\/\\/\/
// int main()
// {
//     ll n;
//     cin>>n;
//     while(n--)
//     {
//         ll a;cin>>a;
//         while(a--)
//         {
//             ll L,R;
//             cin>>L>>R;
//             ll sum=0,count=0;
//             for(int i=L;i<=R;i++)
//             {
//                 sum=0,count=0;
//                 do{
//                   int digit=i%10;
//                   sum+=digit;
//                   i/=10;
//                 }while(i!=0);
//                 if(sum%3==0)
//                 count++;
//             }
//             cout<<count<<endl;
//         }
//     }
// }
// int main()
// {
//     ll n;cin>>n;
//     while(n--)
//     {
//         ll N,P,X,Y;
//         cin>>N>>P>>X>>Y;
//         vLL v;
//         fo(i,0,N)
//         {
//             ll ele;cin>>ele;
//             v.pb(ele);
//         }
//         ll sum=0;
//         fo(i,0,P)
//         {
//             if(v[i]==0)
//             sum+=X;
//             else
//             sum+=Y;
//         }
//         cout<<sum<<endl;

//     }
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         string s;cin>>s;
//         ll count=0;
//         fo(i,0,s.length())
//         {
//             if(s[i]=='0')
//             {
//                 fo(j,i,s.length())
//                 {
//                     if(s[j]=='1')
//                     s[j]='0';
//                     else
//                     s[j]='1';
//                 }
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }
// int main()
// {
//     ll n;cin>>n;
//     ll flag=1;
//     if(n%4==0||n%7==0)
//     cout<<"YES";
//     else{
//     string s=to_string(n);
//     fo(i,0,s.length())
//     {
//         if(s[i]!='4'&&s[i]!='7')
//         {
//             cout<<"NO";
//             flag=0;
//             break;
//         }
//     }
//     if(flag==1)
//     cout<<"YES";
//     }

// }
// int main()
// {
//     vector<int> people{3,2,2,1};
//     int limit=3;
//     int count=0,sum=0;
//         sort(people.begin(),people.end());
//         for(int i=0;i<people.size();i++)
//         {
//             if(sum>limit)
//             {
//                 sum=0;count++;
//                 i-=1;
//             }
//             else
//                 sum+=people[i];
//         }
//         cout<<count+1;
// }
// int gcd(int x, int y)
// {
//     while (y > 0)
//     {
//         return gcd(y, x % y);
//     }
//     return x;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int a, b;
//         cin >> a >> b;
//         if (gcd(a, b) > 1)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int nooffamilymembers;
//     cin>>nooffamilymembers;
//     for(int i=nooffamilymembers;i>=1;i--)
//     {
//         for(int j=1;j<=nooffamilymembers;j++)
//         cout<<i<<" ";
//         cout<<endl;
//     }
// 	return 0;
// }
// void removedub(string s,int idx,int n)
// {
//     vector<int> v;
//     if(idx==n-1)
//     {
//         if(s[idx]!=s[idx-1])
//         v.pb(s[idx]);
//         fo(i,0,v.size())
//         cout<<v[i]<<" ";
//     }
//     if(s[idx]!=s[idx-1])
//     v.pb(s[idx-1]);
//     removedub(s,idx+=1,n);
// }
// int main()
// {
//   string s;
//   cin>>s;
//   removedub(s,1,s.length());

// }
// int main()
// {
//     ll n;cin>>n;
//     while(n--)
//     {
//         string s;
//         cin>>s;
//         if(s.length()==1)
//         cout<<"NO"<<endl;
//         else if(s.length()==0)
//         cout<<"YES"<<endl;
//         else{
//         int countA=0,countB=0,countC=0;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='A')
//             countA++;
//             else if(s[i]=='B')
//             countB++;
//             else
//             countC++;
//         }
//         if(countB>=countA+countC)
//         {
//             if(s.length()%2==0)
//             cout<<"YES"<<endl;
//             else
//             cout<<"NO"<<endl;
//         }
//         else
//         cout<<"NO"<<endl;
//         }
//     }
// }
// int main()
// {
//     int n;cin>>n;
//     while(n--)
//     {
//         int A[n][n];
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;i++)
//             cin>>A[i][j];
//         }
//         int B[n][n];
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;i++)
//             B[j][i]=A[i][j];
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;i++)
//             B[i][n-j-1]=B[i][j];
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;i++)
//             cout<<B[i][j]<<" ";
//         }
//     }
// }
// void toh(int a,char src,char des,char hel)
// {
//     if(a==0)
//     return;
//     toh(a-1,src,hel,des);
//     cout<<a<<src<<" "<<des<<endl;
//     toh(a-1,hel,des,src); //kaha se ja rah , kah ja rah , helper
// }
// int main()
// {
//     toh(1,'A','C','B');
// }

// string mov(string s,int i,int j,int count)
// {
//     int c=0;
//     if(count==5)
//     return s;
//     if(i==s.length()-1)
//     return " ";
//     if(s[i]=='x')
//     {
//         count++;
//         if(s[j]!='x')
//         {
//             char temp=s[i];
//             s[i]=s[c];
//             s[c]=temp;
//             c=j-1;
//         }
//         else
//         mov(s,i,j-=1);
//     }
//     return mov(s,i+=1,j-=1);
// }
// int main()
// {
//     string s="axxbdxcefxhix";
//     cout<<mov(s,0,s.length()-1,0);
// }
// string sub(string s)
// {
//     if(s.length()==0)
//     return "";
//     char ch=s[0];
//     string ans=sub(s.substr(1));
//     if(ch=='x')
//     return ans+ch;
//     return ch+ans;
// }
// int main()
// {
//     string s="abxbx";
//     cout<<sub(s,0);
// }
// string sub(string s)
// {
//     if(s.length()==0)
//     return "";
//     char ch=s[0];
//     string ans=sub(s.substr(1));
//     sub(ans,ros)
//     sub(ans,ans)
// }
// int main()
// {
//     string s="ABC";
//     cout<<sub(s);
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         int a;
//         cin >> a;
//         if (a == 1 || a == 2)
//             cout << "1" << endl;
//         else
//         {
//             vector<int> v;
//             for (int i = 0; i < a; i++)
//                 v.pb(i + 1);
//             int count = 0;
//             int flag = 0;
//             int ans = -1;
//             for (int i = 1; i < v.size(); i++)
//             {
//                 if ((v[i] & v[i - 1]) > 0)
//                 {
//                     flag = 1;
//                     count++;
//                     ans = max(ans, count);
//                 }
//                 else
//                 {
//                     ans = max(ans, count);
//                     count = 0;
//                 }
//             }
//             if (flag == 1)
//                 cout << ans+1 << endl;
//             else
//                 cout << ans << endl;
//         }
//     }
// }
// #include <iostream>
// #include<math.h>
// int main()
// {
//    string s;
//    cin>>s;
//    int a;
//    float b,c;
//    cin>>a>>b>>c;
//    int distance,speed1;
//    if(sqrt(2*a*b)<c-5.0)
//    string s1="SPLASH";
//    else if(sqrt(2*a*b)>c)
//    string s1="LIKE A LEGEND!";
//    else
//    string s1="JOVA MADE IT!";
//    distance=speed1*speed1/9.805;
//    cout<<s<<"will reach a speed of <<"sqrt(2*a*b)"<<on a 301 ramp crossing <<"(c-b)"<<of 162.0 meters," <<s1;

// 	return 0;
// }
// int main()
// {
//     ll n;cin>>n;
//     while(n--)
//     {
//         ll a,b;
//         cin>>a>>b;
//         cout<<(a&b)<<endl;
//     }
// }
// int main()
// {
//     ll n;
//     cin>>n;
//     while(n--)
//     {
//         ll a;cin>>a;
//         int p=(log10(a)/log10(2));
//         int k=pow(2,p);
//         if((k/2)>(n-k+1))
//         cout<<k/2<<endl;
//         else
//         cout<<n-k+1<<endl;
//         // cout<<log(2);
//     }
// }
// int arrdis(int a[],int idx,int ans)
// {
//     if(idx==4)
//     return ans;
//     ans=max(ans,a[idx]);
//     return arrdis(a,idx+=1,ans); // kyuki stack mai uss element ki zarurat nahi hai
// }
// int main()
// {
//     int a[]={1,2,3,4};
//     cout<<arrdis(a,0,-1);
// }
// void arrdis(int a[],int idx,int key)
// {
//     if(idx==10)
//     return;
//     if(a[idx]==key)
//     cout<<idx+1<<" ";
//     arrdis(a,idx+=1,3);
// }
// int main()
// {
//     int a[]={1,2,3,4,3,45,6,3,4,3};
//     arrdis(a,0,3);
// }
// void key(int a[],int idx)
// {
//     if(idx==3)
//     return;
//    if(a[idx]==5)
//    cout<<"abc"<<endl;
//    else if(a[idx]==6)
//    cout<<"def"<<endl;
//    else if(a[idx]==7)
//    cout<<"mnop"<<endl;
//    key(a,idx+=1);
// }
// int main()
// {
//     int a[3];
//     for(int i=0;i<3;i++)
//     cin>>a[i];
//     key(a,0);
// }
// void sub(string s,int idx,string cur)
// {
//     if(idx==5){
//     cout<<cur<<endl;
//     return;}
//     sub(s,idx+1,cur+s[idx]);
//     sub(s,idx+1,cur);
// }
// int main()
// {
//     sub("ABCDE",0,"");
// }
// void dub(string s)
// {
//     if(s[0]!=s[1])
//     cout<<s[0];
//     dub(s+=1);
// }
// int main()
// {
//     dub("aaabbcdde");
// }
// #include <iostream>
// #include<iomanip>
// #include<math.h>
// using namespace std;
// int main()
// {
//    char s[10000];
//    cin>>s;
//    int a;
//    float b,c;
//    cin>>a>>b>>c;
//    float distance,speed1;
//    speed1=sqrtf(2*a*b);
//    distance=speed1*speed1/9.805;
//    cout<<s<<" will reach a speed of "<<speed1<<fixed<<setprecision(2)<<" on a 301 ramp crossing "<<distance<<" of 162.0 meters, ";
//    if(sqrtf(2*a*b)<c-5.0)
//    cout<<"SPLASH";
//    else if(sqrtf(2*a*b)>c)
//    cout<<"LIKE A LEGEND!";
//    else
//    cout<<"JOVA MADE IT!";
// 	return 0;
// }
// int subArrayCount(vector<int> &arr, int k) {
// Write your code here.
// int main()
// {
//     ll n;cin>>n;
//     ll k;
//     cin>>k;
//     vLL v;
//     fo(i,0,n)
//     {
//         ll ele;cin>>ele;
//         v.pb(ele);
//     }
//     ll count=0;
//     fo(i,0,n)
//     {
//         if(v[i]%k==0)
//         count++;
//     }
//     ll sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=v[i];
//         for(int j=i;j<n;j++)
//         {
//            if(i!=j)
//            {
//                sum+=v[j];
//                if(sum%k==0)
//                count++;
//            }
//         }
//         sum=0;
//     }
//     cout<<count;
// }
// // }
// int main()
// {
//     ll n;
//     cin >> n;
//     ll k, l;
//     cin >> k >> l;
//     vLL v;
//     ll count = 0;
//     fo(i, 0, n)
//     {
//         ll ele;
//         cin >> ele;
//         v.pb(ele);
//     }
//     fo(i, 0, n)
//     {
//         if (v[i] <= l && v[i] >= k)
//             count++;
//     }
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         if (v[i] <= l && v[i + 1] <= l)
//             count++;
//         else
//             i += 1;
//     }
//     count << count;
// }

// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         ll n = a;
//         vLL v;
//         fo(i, 0, a)
//         {
//             ll ele;
//             cin >> ele;
//             v.pb(ele);
//         }
//         ll c = b - 1;
//         ll i = 0;
//         while (c--)
//         {
//             while (a--)
//             {
//                 v.pb(v[i]);
//                 i++;
//             }
//             i = 0;
//             a = n;
//         }
//         int count = 0, flag = 1, sum = 0, tot = 0, ans = -1;
//         fo(i, 0, v.size())
//         {
//             if (v[i] >= 0)
//                 flag = 0;
//         }
//         if(v.size()==1)
//         ans=v[0];
//         if (flag == 1)
//         {
//             sort(v.begin(), v.end());
//             cout << v[0] << endl;
//         }
//         else
//         {
//             fo(i, 0, v.size())
//                 sum += v[i];
//             if(sum==0)
//             {
//                 if(v[0]<0&&v[v.size()-1]<0)
//                 {
                    
//                 }
                
//             }
//             else if(sum>0)
//             cout<<b*sum<<endl;
//             else if(sum<0)
//             {
//                 for(int i=0;i<v.size();i++)
//                 {
//                     sum+=v[i];
//                     if(sum>0)
//                     tot=sum;
//                     else
//                     {
//                         ans=max(ans,tot);
//                         sum=0;
//                     }
//                 }
//             }
                
//         }
//     }
// }
// class Solution
// {
// public:
//     int maxProduct(vector<int> &nums)
//     {
//         int mul = 1,count=0;
//         for (int i = 0; i < nums.size(); i++)
//             mul *= nums[i];
//         int c;
//         int flag = 1;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] > 0)
//                 flag = 0;
//         }
//         int tot,ans=-1;
//         if (flag == 1)
//         {
//             for (int i = 0; i < nums.size(); i++)
//             {
//                 if (nums[i] < 0)
//                     count++;
//             }
//             if (count % 2 != 0)
//             {
//                 sort(nums.begin(), nums.end());
//                 return mul / nums[nums.size() - 1];
//             }
//             else
//                 return c;
//         }
// else{
//         if (count % 2 == 0)
//             return mul;
//         else
//         {
//             for (int i = 0; i < nums.size(); i++)
//             {
//                 mul*=nums[i];
//                 if(nums[i]>0)
//                     tot=mul;
//                 else{
//                     ans=max(ans,tot);
//                     tot=1;
//                 }
//             }
//         }
//         if(ans<0)
//         return mul;
//         else if(ans==0)
//         return 0;
//         else
//         return ans;
//         }
//     }
// };