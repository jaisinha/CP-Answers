#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1;
    stack<int> st;
    stack<int> st1;
    for (auto &i : v)
        cin >> i;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(st.empty())
        st1.push(v[i]);
        else{
            while(!st.empty()&&st1.top()<st.top())
                st.pop();
            if(st1.top()>st.top())
            st1.push(st.top());
        }
        st.push(v[i]);
    }
    cout<<st1.top();
}