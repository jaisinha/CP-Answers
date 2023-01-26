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
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
            v1.pb(-1);
        else
        {
            if (st.top() > v[i])
                v1.pb(st.top());
            else
            {
                while (!st.empty() && v[i] >= st.top())
                    st.pop();
                if (st.empty()) // it should come first wanrna no output
                    v1.pb(-1);
                else
                    v1.pb(st.top());
            }
        }
        st.push(v[i]);
    }
    // reverse(v1.begin(), v1.end());
    for (auto i : v1)
        cout << i << " ";
    return 0;
}
