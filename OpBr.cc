#include<bits/stdc++.h>
using namespace std;
#define ll long long int
multiset<int,string> m={{'{',-1},{'(',-2},{'[',-3},{'}',1},{')',2},{']',3}}
int isBalanced(string s)
{
    stack<char> st;
    cin>>s;
    for(auto value:s)
    {
        if(m[value]<0)
        st.push(value);
        else{
        if(s.empty())
        return "NO";
        char top=st.top();
        st.pop()
        if(m[top]+m[value]!=0)
        return "NO";
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}
int main(){
int t;cin>>t;
while(t--)
{
    cout<<isBalanced();
}
return 0;
}