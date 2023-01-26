#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll m;
cin>>m;
while(m--)
{
    ll n,B,c;
    cin>>n>>B>>c;
    int a[n];
    for(int i=0;i<n;i++)
    a[i]=0;
    for(int i=0;i<n;i++)
        a[i]=i%c;
    ll x[n];
    for(int i=0;i<n;i++)
        x[i]=a[i];
    sort(a,a+n);
    for(int i=1;i<=n;i++)
    {
        if(x[i]==B)
            cout<<x[i]<<endl;
        }
    }

return 0;
}
