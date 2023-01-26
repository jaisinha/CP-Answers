#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll m;
cin>>m;
while(m--)
{
    int n,a,b;
    cin>>n>>a>>b;
    int A[n];
    for(int i=0;i<n;i++)
      A[i]=i%b;
    sort(A,A+n);
    int B[n];
    for(int i=0;i<n;i++)
    B[i+1]=A[i];
    for(int i=1;i<=n;i++)
    {
        if(B[i]==a%b)
        {
            if(B[i]==B[i+1])
            {if(i==n-1)
            cout<<i;
            else
            cout<<i+1;}
            else
            cout<<i;
        break;
        }
    }
    cout<<endl;
}
return 0;
}