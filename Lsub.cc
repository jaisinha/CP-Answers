#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
string s;
cin>>s;
ll count=0,ans=-1;
for(int i=0;i<s.length();i++)
{
    count=0;
    for(int j=i+1;j<s.length();j++)
    {
        if(s[i]!=s[j])
        count++;
        else
            count=0;
    }
}
cout<<ans;
return 0;
}