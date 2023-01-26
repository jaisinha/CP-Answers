#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
set<string> s;
string s1;
cin>>s1;
s.insert(s1);
for(auto &val:s)
cout<<val;
return 0;
}