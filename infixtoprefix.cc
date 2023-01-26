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
    string s1="";
    string word = "";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[s.length()-i-1]==')')
        s[s.length()-i-1]='(';
        else if(s[s.length()-i-1]=='(')
        s[s.length()-i-1]=')';
        s1+=s[s.length()-i-1];
    }
    stack<char> st;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            word += s1[i];
        else if (s1[i] == '+' || s1[i] == '-' || s1[i] == '*' || s1[i] == '/' || s1[i] == '(')
        {
            if (!st.empty() && s1[i] != ')')
            {
                if (pre(s1[i]) < pre(st.top()))
                    word+= st.top();
            }
            if (s1[i] != '(')
                st.push(s1[i]);
        }
        else if (s1[i] == ')')
        {
            while (!st.empty())
            {
                word += st.top();
                st.pop();
            }
        }
    }
    reverse(word.begin(),word.end());
    cout<<word;
}
int main()
{
    inftopst("(a*b+c/x)+(c*b)");
}