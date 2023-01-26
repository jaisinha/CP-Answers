#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int mah(stack<pair<int, int>> st, vector<int> v, int n, vector<int> v1)
{
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
            v1.pb(-1);
        else
        {
            if (st.top().first < v[i])
                v1.pb(st.top().second);
            else
            {
                while (!st.empty() && v[i] <= st.top().first)
                    st.pop();
                if (st.empty())
                    v1.pb(-1);
                else if (v[i] > st.top().first)
                    v1.pb(st.top().second);
            }
        }
        st.push({v[i], i});
    }
// reverse(v1.begin(), v1.end());
vector<int> v4;
stack<pair<int, int>> st1;
for (int i = n - 1; i >= 0; i--)
{
    if (st1.empty())
        v4.pb(n);
    else
    {
        if (st1.top().first < v[i])
            v4.pb(st1.top().second);
        else
        {
            while (!st1.empty() && v[i] <= st1.top().first)
                st1.pop();
            if (st1.empty())
                v4.pb(n);
            else if (v[i] > st1.top().first)
                v4.pb(st1.top().second);
        }
    }
    st1.push({v[i], i});
}
reverse(v4.begin(), v4.end());
vector<int> v5;
for (int i = 0; i < v.size(); i++)
    v5.pb((v4[i] - v1[i] - 1) * v[i]);
int ans = -1;
for (int i = 0; i < v.size(); i++)
    ans = max(ans, v5[i]);
return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1;
    stack<pair<int, int>> st;
    for (auto &i : v)
        cin >> i;
    cout<<mah(st, v, n, v1);
}
