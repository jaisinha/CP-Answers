
// float display(vector<int> &vec)
// {
//     // cout<<vec.size();
//     cout<<endl;
//     for(int i=1;i<=vec.size();i++){
//     cout<<vec[i]<<" ";}
// }
// int main(){
// vector<int> v;
// int size,size1,x;
// cin>>size;
// for(int i=1;i<=size;i++)
// {
//     cin>>x;
//     v.push_back(x);
//  }
// cin>>size1;
// int a[size1],j;
// for(int i=1;i<=size1;i++){
//     cin>>j;
//     if(j==a[i]){
// auto it=lower_bound(v.begin(),v.end(),a[i]);
// cout<<"YES"<<" "<<(it-v.begin())<<endl;}
// else{
// auto it1=upper_bound(v.begin(),v.end(),a[i+1]);
// cout<<"NO"<<" "<<(it1-v.begin())<<endl;}}
// // auto it=lower_bound(v.begin(),v.end(),4)}
// // display(v);
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
 n,a,b;
cin>>n;
while(n--)
{
    cin>>a>>b;
    cout<<a+b<<endl;
}
return 0;
}
