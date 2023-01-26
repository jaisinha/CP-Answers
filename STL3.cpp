#include<bits/stdc++.h>
#define   ll                           		long long int
#define   ull                           	unsigned long long int
#define   cint                              const int
#define   fo(number1,number2,number3)  		for(int number1=number2;number1<number3;++number1)
#define   rfo(number1,number2,number3) 		for(int number1=number2-1;number1>=number3;--number1)
#define   pi                          		pair<int,int>
#define   vLL                          		vector<ll>
#define	  vi								vector<int>
#define   pb                          		push_back
#define   ppb                               pop_back
#define   eb 								emplace_back
#define   lbd								lower_bound
#define   ubd								upper_bound
#define   mp                          		make_pair
#define   cps                         		CLOCKS_PER_SEC
#define   decimal(k)                  		fixed<<setprecision(k)
#define   PI                          		3.14159265359
#define   fastio                      		ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define   ff                           		first
#define   ss                           		second
#define   all(V)                      		(V).begin(),(V).end()
#define   alla(a,n) 						a, a+n
#define   sz(v) 							(ll)v.size()
#define   SORT(v) 							sort(all(v))
#define   REV	 							reverse
#define   SUM(v) 							accumulate(v.begin(),v.end(),0)
#define   MAX 								max_element
#define   MIN	 							min_element
#define   UNIQUE(v) 						SORT(v); v.erase(unique(v.begin(),v.end()),v.end())
#define   UNIQUEA(a,n) 						unique(a,a+n)-a
#define   MAXA(a,n) 						max_element(a,a+n)
#define   MINA(a,n) 						min_element(a,a+n)
#define   SORTA(a, n) 						sort(alla(a, n))
#define   REVA(a, n) 						reverse(alla(a, n))
#define   mem1(a)           				memset(a,-1,sizeof(a));
#define   mem0(a)           				memset(a,0,sizeof(a));
#define   mymax                       		1000000000000000100
#define   mymin                      		-1000000001
#define   bitcount                    		__builtin_popcount
#define   gcd                         		__gcd
#define   MOD                         		(ll)1000000007
#define   TEST(t) 					  		int tc; cin>>tc; fo(t,1,tc)
#define   VECT(v,n)							ll n; cin >> n; vLL v(n); fo(i,0,n-1) cin >> v[i];
#define   NUM(n)							ll n; cin >> n;
#define	  STRING(s)							string s; cin >> s;
#define   TS								to_string
#define   len(s)							(s).length()
#define   line 						  		cout << "\n";
#define   el								"\n"
#define   clkstart							auto start = high_resolution_clock::now();
#define   clkend							auto stop = high_resolution_clock::now(); auto duration = duration_cast<microseconds>(stop - start);
#define   TIME								line; line; cout << "Time taken by function: " << duration.count()/1e6 << " seconds" << endl;
#define   open								{
#define	  close								}
#define   goog(tno)                         cout <<"Case #" << tno << ": "
#define   deb(x)							cout << #x << " = " << x << el;
#define   deb2(x,y)							cout << #x << " = " << x << " : " << #y << " = " << y << el;
// #ifndef SEGMENTTREE_H
#define SEGMENTTREE_H
#define left(i) (2*i + 1)
#define right(i) (2*i + 2)
#define parent(i) ((i-1)/2)
// #include<stdio.h>
using namespace std;
//KNAPSACK PROBLEM
// bool compare(pi a,pi b)
// void declare(vector<vector<int>> &v) // if no reference then no v.push_back in the calling function
// {
//     for(int i=0;i<v.size();i++)
//     cout<<v[i]<<" ";
//     cout<<endl;
    // v.push_back(3);
// }
// vector in array
// int main(){
//     int N;
//     cin>>N;
//     vector<int> v[N]; //array of vectors
//     for(int i=0;i<N;i++)
//     {
//         int n;cin>>n;
//         for(int j=0;i<n;i++)
//         {
//             int l;cin>>l;
//             v[i].push_back(l);
//         }
//     }
//     for(int i=0;i<N;i++)
//     declare(v[i]);
// }
//     for(int i=0;i<n;i++){
//     cin>>element1>>element2;
//     v.push_back({element1,element2});
//     }
//     declare(v);
//     return 0;
// }
// int main(){
//     int N;
//     cin>>N;
//     vector<vector<int>> v; //array of vectors
//     for(int i=0;i<N;i++)
//     {
//         int n;cin>>n;
//         vector<int> temp;
//         for(int j=0;j<n;j++)
//         {
//             int l;cin>>l;
//             temp.push_back(l);
//         }
//             v.push_back(temp);
//     }
//     for(int i=0;i<v.size();i++)
//     declare(v[i]);
// }
// bool shswap(vector<pair<int,int>> a,vector<pair<int,int>>b)
//     {
//         if(a>b)return true;
//         return false;
//     }
// bool swap(vector<pair<int,int>> a,vector<pair<int,int>> b)
//     {
//         if(a>b)
//         return true;
//     }
// int main()
// {
//     set<string> s1;
//     int n;cin>>n;
//     fo(i,0,n)
//     {
//         string s;
//         cin>>s;
//         s1.insert(s);
//     }
//     string s2;
//     cin>>s2;
//     auto it=s1.find(s2);
//     if(it!=s1.end())
//     cout<<"YES"<<endl;
//     else
//     cout<<"NO"<<endl;
// }
////////////////////////////////////////////
// bool rev(string s,int i,int j)
// {
//     if(i==s.length()-1)
//     return true;
//     if(s[i]!=s[j])
//     return false;
//     rev(s,i+=1,j-=1);
// }
// int main()
// {
//     string s;cin>>s;
//     cout<<rev(s,0,s.length()-1);
// }
/////////////////////////////////////////////
// void power(string s,int i,string cur)
// {
//     if(i==s.length()){
//     cout<<cur<<endl;
//     return;}
//     power(s,i+1,cur+s[i]);
//     power(s,i+1,cur);
// }
// int main()
// {
//     power("ABC",0,"");
// }
/////////////////////////////////////////////
// void per(string s,char a,char b,char c)
// {
//     if()
//     per(string s,char a,char c,char b);
//     per(string s,char b,char c,char a);
//     per(string s,char c,char b,char a);
// }
// int main()
// {
//     per("ABC",'A','B','C');
// }