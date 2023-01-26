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
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
            min=v[i];
        else
        {
            while (!st.empty() && v[i] < st.top())
                st.pop();
            if(st.empty())
            min=v[i];
        }
        st.push(v[i]);
    }
    cout<<min;
}