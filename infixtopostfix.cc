#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int pre(char s)
{
    if (s == '+' || s == '-')
        return 1;
    else
        return 2;
}
void inftopst(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            cout << s[i];
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '(')
        {
            if (!st.empty() && s[i] != ')')
            {
                if (pre(s[i]) < pre(st.top()))
                    cout << st.top();
            }
            if(s[i]!='(')
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty())
            {
                    cout << st.top();
                st.pop();
            }
        }
    }
}
int main()
{
    inftopst("(a-b/c)*(a/k-l)");
}
