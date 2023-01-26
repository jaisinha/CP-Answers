// EASY PEESY
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
    ll count = 1;
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
            v1.pb(1);
        else
        {
            while (!st.empty() && v[i] > st.top())
            {
                st1.push(st.top());
                st.pop();
                count++;
            }
            if (st.empty() || v[i] <= st.top())
            {
                while (!st1.empty())
                {
                    st.push(st1.top());
                    st1.pop();
                }
                v1.pb(count);
                count = 1;
            }
        }
        st.push(v[i]);
    }
    // reverse(v1.begin(), v1.end());
    for (auto i : v1)
        cout << i << " ";
    return 0;
}