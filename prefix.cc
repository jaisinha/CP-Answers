// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int print(string s)
// {
//     stack<int> st;
//     for (int i = s.length() - 1; i >= 0; i--)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//             st.push(s[i] - '0');
//         else
//         {
//             int op1 = st.top();
//             st.pop();
//             int op2 = st.top();
//             st.pop();
//             switch (s[i])
//             {
// case '+':
//     st.push(op1 + op2);
//     break;
// case '-':
//     st.push(op1 - op2);  break;
// case '/':
//     st.push(op1 / op2);
//     break;
// case '*':
//     st.push(op1 * op2);  break;
//             }
//         }
//     }
//         return st.top();
// }
//     int main()
//     {
//         string s="46+2/5*7+";
//         cout<<print(s);
//         return 0;
//     }
//     // -+7*45+20
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int print(string s)
// {
//     stack<int> st;
//     for (int i = 0; i <s.length(); i++)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//             st.push(s[i] - '0');
//         else
//         {
//             int op1 = st.top();
//             st.pop();
//             int op2 = st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1 + op2);
//                 break;
//             case '-':
//                 st.push(op1 - op2);
//                 break;
//             case '/':
//                 st.push(op1 / op2);
//                 break;
//             case '*':
//                 st.push(op1 * op2);
//                 break;
//             }
//         }
//     }
//     return st.top();
// }
// int main()
// {
//     cout<<print("46+2/5*7+");
// }
