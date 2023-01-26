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
#define fastio                            \
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
        SORT(v);  \
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
#define TEST(t)    \
        int tc;    \
        cin >> tc; \
        fo(t, 1, tc)
#define VECT(v, n) \
        ll n;      \
        cin >> n;  \
        vLL v(n);  \
        fo(i, 0, n - 1) cin >> v[i];
#define NUM(n) \
        ll n;  \
        cin >> n;
#define STRING(s) \
        string s; \
        cin >> s;
#define TS to_string
#define len(s) (s).length()
#define line cout << "\n";
#define el "\n"
#define clkstart auto start = high_resolution_clock::now();
#define clkend                                    \
        auto stop = high_resolution_clock::now(); \
        auto duration = duration_cast<microseconds>(stop - start);
#define TIME  \
        line; \
        line; \
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
//     map<int,int> v;
//     ll n;
//     cin>>n;
//     // ll n1=n;
//     ll count=0;
//     while(n--)
//     {
//         ll ele;
//    v[ele]=0;
//         for(int i=0;i<3;i++)
//         {
//             ele;cin>>ele;
//             if(ele==1)
//             v[ele]++;
//         }
//         if(v[ele]>1)
//         count++;
//         v[ele]=0;
//     }
//     cout<<count;
//     return 0;
// }
// using namespace std;
// int main()
// {
//         ll n;cin>>n;
//         ll X=0;
//         while(n--)
//         {
//         string s;
//         cin>>s;
//         ll flag=1;
//         for(int i=0;i<s.length();i++)
//         {
//                 if(s[i]=='+')
//                 flag=0;
//         }
//         if(flag==0)
//         X+=1;
//         else
//         X-=1;
//         }
//         cout<<X;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// // fastio
// ll m;
// cin>>m;
// ll a[m];
// for(int i=0;i<m;i++)
// cin>>a[i];
// ll n;cin>>n;
// ll sum=0,sum1=0;
// while(n--){
//         ll key;cin>>key;
//         ll count=1;
// int bin(int a[],int number){
//    int first=1,last=5,mid;
//    do{
//       mid=(first+last)/2;
//       if(a[mid]==number)
//       return mid;
//       if(a[mid]>number){
//       last=mid-1;
//       count++;
//       sum+=count;}
//       else if(a[mid]<number){
//       first=mid+1;
//       count++;
//       sum+=count;}
//    }while(first<=last);
//       return mid;
//         count++;
//         sum+=count;
//         count=1;
//         for(int i=m-1;i>=0;i--)
//         {if(key!=a[i])
//         count++;
//         else
//         break;}
//         sum1+=count;
// }
// cout<<sum<<" "<<sum1;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// ll m;
// cin>>m;
// while(m--)
// {
//         ll m1,c,d,ans=INT_MAX;cin>>m1;
//         int a[m1];
//         for(int i=0;i<m1;i++)
//         {
//                 for(int j=i;j<m1;j++)
//                 {
//                         if(a[i]+2*a[j]==m1)
//                                 if(ans>(abs(a[i]-a[j])))
//                                 {
//                                         ans=abs(a[i]-a[j]);
//                                         c=a[i];
//                                         d=a[j];
//                                 }
//                 }
//         }
//         cout<<c<<" "<<d<<endl;
// }
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// fastio
// ll m;
// cin>>m;
// vLL a;
// for(ll i=0;i<m;i++)
// {ll ele;cin>>ele;
// a.pb(ele);
// }
// ll n;cin>>n;
// ll sum=0,sum1=0;
// while(n--){
//         ll key;cin>>key;
//         ll count=1;
//         for(ll i=0;i<m;i++)
//         {if(key!=a[i])
//         count++;
//         else
//         break;}
//         sum+=count;
//         count=1;
//         for(ll i=m-1;i>=0;i--)
//         {if(key!=a[i])
//         count++;
//         else
//         break;}
//         sum1+=count;
// }
// cout<<sum<<" "<<sum1;
// return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long int
// int main()
// {
//         ll m, k;
//         cin >> m >> k;
//         vLL a;
//         vLL b;
//         for (ll i = 1; i <= m; i++)
//         {
//                 ll ele;
//                 cin >> ele;
//                 a.pb(ele);
//         }
//         if(m==1)
//         cout<<"1";
//         else{
//         for (ll i = 1; i <= m; i++)
//                 b.pb(i);
//         ll i=1;
//         do{
//                  if ((a[i] - k) <= 0)
//                 {
//                         a.erase(a.begin() + (i - 1));
//                         b.erase(b.begin() + (i - 1));
//                 }
//                 else
//                 {
//                         ll c, d;
//                         a[i] = a[i] - k;
//                         c = a[i];
//                         d = b[i];
//                         a.erase(a.begin() + (i - 1));
//                         b.erase(b.begin() + (i - 1));
//                         a.pb(c);
//                         b.pb(d);
//                 }
//         }while(a.size()!=1);
//         if(m==2)
//         cout<<b[1]-1;
//         else
//         cout<<b[1];}
//         return 0;
// }
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // int main(){
// // fastio
// // ll m;
// // cin>>m;
// // int a[100040];
// // for(ll i=0;i<m;i++)
// // {
// //         ll ele;cin>>ele;
// //         a[ele]=i+1;
// // }
// // ll n;cin>>n;
// // ll sum=0,sum1=0;
// // while(n--){
// //         ll key;cin>>key;
// //         sum+=a[key];
// //         sum1+=m-a[key]+1;
// // }
// // cout<<sum<<" "<<sum1;
// // return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){
// int a,b,c;
// cin>>a>>b>>c;
// int x=(sqrt(a*b)/c);
// int y=(sqrt(b*c)/a);
// int z=(sqrt(a*c)/b);
// cout<<4*(x+y+z);
// return 0;
// // }
// // #include<bits/stdc++.h>
// using namespace std;
// // #define ll long long int
// // int main(){
// // vector<char> v;
// // string s;
// // cin>>s;
// // for(int i=0;i<s.length();i++)
// //         v.push_back(s[i]);
// // for(int i=0;i<v.size();i++)
// // {
// //         if(v[i]=='A'||v[i]=='a'||v[i]=='E'||v[i]=='e'||v[i]=='I'||v[i]=='i'||v[i]=='O'||v[i]=='o'||v[i]=='U'||v[i]=='u'||v[i]=='Y'||v[i]=='y'){
// //         v.erase(v.begin()+i);
// //         i-=1;}
// // }
// // vector<char> v1;
// // int i=0,j=0;
// // ll c;
// // while(true)
// // {
// //   if(j==v.size()){
// //   for(int i=0;i<v1.size();i++)
// //   cout<<v1[i];
// //   break;}
// //   else if(i%2==0){
// //   v1.push_back('.');
// //   i++;
// //   }
// //   else if(i%2!=0){
// //   c=v[j];
// //   if(isupper(c))
// //   v[j]=tolower(c);
// //   v1.push_back(v[j]);
// //   j++;i++;}
// // }
// // return 0;
// // }
// // using namespace std;
// // int main()
// // {
// //         ll n,m;
// //         cin>>n>>m;
// //         ll count=0;
// //         for(int i=0;i<=n||i<=m;i++)
// //         {
// //                 for(int j=0;j<=n||j<=m;j++)
// //                 if(i*i+j==n&&i+j*j==m)
// //                 count++;
// //         }
// //         cout<<count;
// // }
// // int main()
// // {
// //         vLL v;
// //         ll n, d, e;
// //         cin >> n;
// //         for (int i = 0; i < n; i++)
// //         {
// //                 ll ele;
// //                 cin >> ele;
// //                 v.pb(ele);
// //         }
// //         vLL v1=v;
// //         sort(v.begin(), v.end());
// //             ll ans = 100;
// //         for (int i = 1; i <= v.size(); i++)
// //         {
// //                 ll c = v[i] - v[i - 1];
// //                 if (ans > c)
// //                 {
// //                         ans = c;
// //                         d = i;
// //                         e = i - 1;
// //                 }
// //         }
// //         for (int i = 1; i <= v1.size(); i++)
// //         {
// //                 if(v[e]==v1[i]){
// //                 cout<<i;
// //                 break;}
// //                 // v1.erasv1.begin()+(i-1));
// //         }
// //         for (int i = e; i <= v1.size(); i++)
// //         {
// //         if(v[d]==v1[i])
// //                 cout<<" "<<i;
// //         }
// //         return 0;
// // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // int main()
// // {
// //     long long n,k; cin>> n >> k;
// //     long long aux=n/2,aux2=(n+1)/2;
// //     if(k<=aux2){
// //         cout<<((k)*2)-1<<endl;
// //     }else cout<<(k-aux2)*2<<endl;
// //         return 0;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // int main(){
// // ll m;
// // cin>>m;
// // vLL v;
// // for(int i=0;i<m;i++)
// // {
// //         ll ele;
// //         cin>>ele;
// //         v.pb(ele);
// // }
// // vLL v1=v;
// // ll ans=1e6,d,e,c;
// // sort(v.begin(),v.end());
// // for(int i=1;i<=v.size();i++)
// // {
// //         c=abs(v[i]-v[i-1]);
// //         if(ans>c)
// //         {
// //                 ans=c;
// //                 d=v[i];
// //                 e=v[i-1];
// //         }
// // }
// // // ll flag=1;
// // for(int i=1;i<=v.size();i++)
// // {
// //         if(v[e]==v1[i]){
// //         cout<<i;
// //         v.erase(v.begin()+(i-1));
// //         i-=1;}
// //         else if(v[d]=v1[i])
// //         cout<<i+1;
// // }
 
// // return 0;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // int main(){
// // ll m;
// // cin>>m;
// // ll a[m];
// // ll ans=INT_MAX;
// // for(int i=0;i<m;i++){
// // cin>>a[i];
// // ans=min(ans,a[i]);}
// // ll count=0;
// // for(int i=0;i<m;i++)
// // {
// //         if(ans==a[i])
// //         count++;
// // }
// // if(count>1)
// // cout<<"Still Rozdil";
// // else
// // cout<<ans;
// // return 0;
// // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // int main()
// // {
// //         ll m;
// //         cin >> m;
// //         ll a[m];
// //         for (int i = 1; i <= m; i++)
// //                 cin >> a[i];
// //         if (a[1] % 2 != 0)
// //         {
// //                 cout<<"3";
// //         }
// //         else
// //         {
// //                 cout<<"2";
// //         }
 
// //         return 0;
// // }
// // using namespace std;
// // int main()
// // {
// //         vLL v1;
// //         vLL v2;
// //         ll i=0;
// //         ll m;cin>>m;
// //         do{
// //         ll a;
// //         cin>>a;
// //         v1.pb(a);
// //         ll b;cin>>b;
// //         v2.pb(b);
// //         i++;
// //         }while(i!=m);
// //         ll flag=1,flag1=1,flag2=1,flag3=1,count=0;
// //         for(int i=0;i<v1.size();i++)
// //         {
// //                 flag=1,flag1=1,flag2=1,flag3=1;
// //                 for(int j=0;j<v2.size();j++)
// //                 {
// //                         if(i!=j)
// //                         {
// //                         if(v1[i]<=v1[j]&&v2[i]==v2[j])
// //                         flag=0;
// //                         if(v1[i]>=v1[j]&&v2[i]==v2[j])
// //                         flag1=0;
// //                         if(v1[i]==v1[j]&&v2[i]<=v2[j])
// //                         flag2=0;
// //                         if(v1[i]==v1[j]&&v2[i]>=v2[j])
// //                         flag3=0;}
// //                 }
// //                 if(flag==0&&flag1==0&&flag2==0&&flag3==0)
// //                 count++;
// //         }
// //         cout<<count;
// // }
// // int main()
// // {
// //         ll m;
// //         cin >> m;
// //         vLL v;
// //         for (int i = 0; i < m; i++)
// //         {
// //                 ll ele;
// //                 cin >> ele;
// //                 v.pb(ele);
// //         }
// //         ll count=0;
// //         for (int i = 0; i < m; i++)
// //         {
 
// //                 if(v[i]==0)
// //                 count++;
// //         }
// //         if(count==0)
// //         cout<<"-1";
// //         else{
// //         sort(v.begin(), v.end(),greater<ll>());
// //         ll sum;
// //         do
// //         {
// //         ll i = 0;
// //         ll sum = 0;
// //                 do
// //                 {
// //                         sum += v[i];
// //                         if (i != v.size() - 1)
// //                                 sum = sum * 10;
// //                         i++;
 
// //                 } while (i != v.size());
// //                 if (v.size() == 1)
// //                 {
// //                         cout << "0";
// //                         break;
// //                 }
// //                 else{
// //                         ll j=0;
// //                         v.erase(v.begin()+j);
// //                      }
// //         } while (sum % 90 != 0);
// //         cout << sum;}
// //         return 0;
// // }
// int main()
// {
//         string s;
//         cin >> s;
//         ll flag = 0;
//         for (int i = 0; i < s.length() ; i++)
//         {
//                 if(s[i]==1&&s[i+1]==4)
//                 {
//                         flag=1;
//                         i+=1;
//                 }
//                 else if(s[i]==1&&s[i+1]==4&&s[i+2]==4)
//                 {
//                         flag=1;
//                         i+=2;
//                 }
//                 else if(s[i]==1)
//                 {
//                         flag=1;
//                 }
//                 else{
//                 flag=0;
//                 break;
//                 }
//         }
//         if (flag == 1)
//                 cout << "YES";
//         else
//                 cout << "NO";
//         return 0;
// }
// // int main()
// // {
// //         string s1;
// //         string s2;
// //         cin>>s1;
// //         cin>>s2;
// //         ll flag=1;
// //         if(s1.length()==s2.length())
// //         {
// //                 for(int i=0;i<s1.length();i++){
// //                 if(s1[i]!=s2[s2.length()-i-1])
// //                 flag==0;}
// //         }
// //         else
// //         flag=0;
// //         if(flag==0)
// //         cout<<"NO";
// //         else
// //         cout<<"YES";
// // }
// int main()
// {
//         ll n;
//         cin>>n;
//         vLL v;
//         for(int i=0;i<n;i++)
//         {
//                 ll ele;cin>>ele;
//                 v.pb(ele);
//         }
//         ll m;
//         cin>>m;
//         vLL v1;
//         for(int i=0;i<m;i++)
//         {
//                 ll ele;cin>>ele;
//                 v1.pb(ele);
//         }
//         ll ans=-1,count=0,ans1=-1;
//         for(int i=0;i<n;i++)
//         {
//                 ans=-1;
//                 for(int j=0;j<m;j++)
//                 {
//                         if(v1[j]%v[i]==0)
//                         ans=max(ans,(v1[j]/v[i]));
//                 }
//                if(ans1<ans)
//                {
//                        ans1=ans;
//                        count=1;
//                }
//                else if(ans1==ans)
//                {
//                        count++;
//                }
 
//         }
//         cout<<count;
// }
// int main()
// {
//         ll n;
//         cin>>n;
//         vLL v;
//         ll sum=0;
//         for(int i=0;i<12;i++)
//         {
//                 ll ele;cin>>ele;
//                 v.pb(ele);
//                 sum+=v[i];
//         }
//         if(n==0)
//         cout<<"0";
//         else if(n>sum)
//         cout<<"-1";
//         else{
//                 sort(v.begin(),v.end(),greater<ll>());
//                 sum=0;
//                 ll count=0;
//                 for(int i=0;i<v.size();i++)
//                 {
//                         sum+=v[i];
//                         if(sum<n)
//                         count++;
//                         else if(sum>=n){
//                         count++;
//                         break;}
//                 }
//                 cout<<count;
//         }
//         return 0;
 
// }
// int main()
// {
//         ll n;
//         cin>>n;
//         while(n--)
//         {
//         map<char,ll> m;
//                 string s;cin>>s;
//                 int n=s.length();
//                 ll ans=-1;
//                 for(int i=0;i<s.length();i++)
//                 {
//                         m[s[i]]++;
//                         ans=max(ans,m[s[i]]);
//                 }
//                 for(auto i:m)
//                 {
//                         if(ans==i.second)
//                         {
//                                 if(n/2==(n-i.second))
//                                 cout<<"YES"<<endl;
//                                 else
//                                 cout<<"NO"<<endl;
//                                 break;
//                         }
//                 }
//         }
// }
// int main()
// {
//         int n;cin>>n;
//         while(n--)
//         {
//                 vLL v;
//                 for(int i=0;i<10;i++)
//                 {
//                         ll ele;cin>>ele;
//                         v.pb(ele);
//                 }
//                 ll count=0,count1=0;
//                 for(int i=0;i<10;i++)
//                 {
//                         if(i%2==0)
//                         {
//                                 if(v[i]==1)
//                                 count++;
//                         }
//                         else
//                         {
//                                 if(v[i]==1)
//                                 count1++;
//                         }
//                 }
//                 if(count==count1)
//                 cout<<"0"<<endl;
//                 else if(count>count1)
//                 cout<<"1"<<endl;
//                 else
//                 cout<<"2"<<endl;
//         }
// }
// int main()
// {
//         // vLL v;
//         ll n;cin>>n;
//         while(n--)
//         {
//              ll A,M,X;
//              cin>>A>>M>>X;
//              vLL v;
//              for(int i=0;i<A;i++)
//              {
//                      ll ele;cin>>ele;
//                      v.pb(ele);
//              }
//              vLL v2;
//              sort(v.begin(),v.end());
//              for(int i=0;i<A;i++)
//              {
//                      if(v[i]>=M)
//                      {
//                        v2.pb(i+1);
//                 //        v.erase(v.begin()+i);
//                      }
//              }
//              if(v2.size()>0&&v2.size()<X){
//              for(int i=1;i<=X-v2.size();i++)
//              {
//                      if(v[i-1]<v[i])
//                      v2.pb(i);
//                      if(v2.size()==X)
//                      break;
//              }
//              }
//              else if(v2.size()==0)
//              {
//                 for(int i=X;i>=1;i--)
//              {
//                      if(v[i-1]<v[i])
//                      v2.pb(i+1);
//                      if(v2.size()==X)
//                      break;
//              }
//              }
//              cout<<v2.size()<<" ";
//              sort(v2.begin(),v2.end());
//              for(int i=0;i<v2.size();i++)
//              cout<<v2[i]<<" ";
//              cout<<endl;
//         }
// }
// int main()
// {
//         string s;
//         cin>>s;
//         ll count=0,count1=0,flag=1;
//         for(int i=0;i<s.length()-1;i++)
//         {
//                 count=0,count1=0;
//                 if(s[i]==s[i+1])
//                 {
//                 if(s[i]=='0')
//                 count++;
//                 else
//                 count1++;
//                 if(count1>=7||count>=7)
//                 flag=0;}
//         }
//         if(flag==0)
//         cout<<"YES";
//         else
//         cout<<"NO";
// }
// int main()
// {
//         map<char,ll> m;
//         ll n;cin>>n;
//         string s;
//         cin>>s;
//         vector<char> v1;
//         for(int i=0;i<s.length();i++)
//         v1.pb(s[i]);
//         for(int i=0;i<s.length();i++)
//         m[s[i]]++;
//         vector<char> v;
//         if(m.size()==n)
//         {
//            for(int i=0;i<v1.size()/2;i++)
//            {
//                 v.pb(s[i]);
//                 for(int j=i+1;j<v1.size();j++)
//                 {
//                         if(v[i]!=v[j])
//                         {
//                                 v.pb(s[j]);
 
//                                 break;
//                         }
//                 }
//            }
//            for(int i=0;i<s.length();i++)
//            cout<<v[i];
//         }
//         else
//         cout<<"-1";
//         return 0;
// }
// int main()
// {
//         ll n,m,l;
//         cin>>n>>m>>l;
//         if((n-m)>(l+1))
//         {ll c=(n-m)-(l+1);
//         cout<<(n-m)-c;}
//         else
//         cout<<n-m;
//         return 0;
// }
// int main()
// {
//         string s;cin>>s;
//         vector<char> v;
//         for(int i=0;i<s.length();i++)
//         v.pb(s[i]);
//         ll i=0;
//         vector<char> v1;
//         while(i!=v.size())
//         {
//                 if(v[i]=='W'&&v[i+1]=='U'&&v[i+2]=='B'){
//                 v.erase(v.begin()+i);
//                 v.erase(v.begin()+i);
//                 v.erase(v.begin()+i);}
//                 else{
//                 v1.pb(v[i]);
//                 i++;
//                 if(v[i]=='W'&&v[i+1]=='U'&&v[i+2]=='B')
//                 v1.pb(' ');
//                 }
//         }
//         for(int i=0;i<v1.size();i++)
//         cout<<v1[i];
//         return 0;
//}
// int main()
// {
//         ll n;
//         cin >> n;
//         vLL v;
//         for (int i = 1; i <= n; i++)
//                 v.pb(i);
//         vLL v1;
//         ll m;
//         cin >> m;
//         for (int i = 0; i < m; i++)
//         {
//                 ll ele;
//                 cin >> ele;
//                 v1.pb(ele);
//         }
        
//         ll j = 0, count = 0;
//         while (j != m)
//         {
//                 for (int i = 1; i <= v.size(); i++)
//                 {
//                         if (j != m)
//                         {
//                                 if (v1[j] != v[i])
//                                         count++;
//                                 else
//                                 {
//                                         if (v1[j] == v[j + 1])
//                                                 j++;
//                                         else
//                                         {
//                                                 j++;
//                                         }
//                                 }
//                         }
//                 }
//         }
//         cout << count;
//         return 0;
// }
int main()
{
        int n;cin>>n;
        for(int i=0;i<=n;i++)
        {
                for(int j=0;j<=i;j++)
                {
                        cout<<j<<" ";
                }
        }
}