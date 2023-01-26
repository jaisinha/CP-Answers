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
    for (auto &i : v)
        cin >> i;
    for (int i = n-1; i >= 0; i--)
    {
        if (st.empty())
            v1.pb(-1);
        else
        {
            if (st.top() < v[i])
                v1.pb(st.top());
            else
            {
                while (!st.empty() && v[i] <= st.top())
                    st.pop();
                if (st.empty())
                    v1.pb(-1);
                else if (v[i] > st.top())
                    v1.pb(st.top());
            }
        }
        st.push(v[i]);
    }
    reverse(v1.begin(), v1.end());
}