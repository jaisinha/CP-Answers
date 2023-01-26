#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll count,sum,m,ans=100,flag;
cin>>m;
for(int i=1;i<=(1<<11);i++)
{
    sum=0;
    int flag=0;
    for(int j=i;j<=(1<<11);j++)
    {
           if(j&(j-1)==0)
           {
               sum+=j;
               count++;
               if(m==sum){
               ans=min(ans,count);
               count=0;
               flag=1;}
               else if(sum>m)
               break;
           }
    }
}
if(flag==1)
cout<<ans<<endl;
return 0;
}
