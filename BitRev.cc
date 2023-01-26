#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// int countone(ll n)
// {
//     ll count=0;
//    for(int i=0;i<32;i++)
//    {
//        if((n&(1<<i))==1)
//        {
//           count++;
//        }
//    }
//    return count;
// }
// int main()
// {
//     ll n;cin>>n;
//     cout<<countone(n);
// }
// void subset(ll a[],ll n)
// {
//     for(int i=0;i<(1<<n);i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i&(1<<j))
//             cout<<a[j]<<" ";
//         }cout<<endl;
//     }
// }
// int main()
// {
//     ll a[4]={1,2,3,4};
//     subset(a,4);
// }
//     ll count = 0;
//2 DUPLICAES AND 1 UNIQUE////////
// int setbit(int n,int pos)
// {
//     return (n&(1<<pos))!=0;
// }
//     void unique(int a[],int n)
//     {
//         int count=0;
//         int c=0;
//         for(int i=0;i<n;i++)
//         c^=a[i];
//         int temp=c;
//     while (c != 0)
//     {
//         c=c & 1;
//         count++;
//         c = c >> 1;
//     }
//     int newxor=0;
//     for(int i=0;i<n;i++)
//     {
//         if(setbit(a[i],count-1))
//         newxor^=a[i];
//     }
//     cout<<newxor<<" ";
//     int z=newxor^temp;
//     cout<<z;
//     }
// int main()
// {
//     int a[] = {5, 4, 1, 4, 3, 5, 1, 2};
//     unique(a,8);

// }
//3 DUPLICAES AND 1 UNIQUE//////
// int getbit(int result,int pos)
// {
//     return result|(1<<pos);
// }
// int setbit(int n,int pos)
// {
//     return (n&(1<<pos))!=0;
// }
// int unique(int a[],int n){
//     ll sum,result;
//     for(int i=0;i<64;i++)
//     {
//         sum=0;
//         for(int j=0;j<n;j++)
//         {
//             if(setbit(a[j],i))
//             sum++;
//         }
//         if(sum%3!=0)
//         result=getbit(0,i);
//     }
//     return result;
// }
// int main()
// {
//     int a[]={1,2,3,4,1,2,3,1,2,3};
//     cout<<unique(a,10);
// }
// int noofz(int n)
// {
//     int count = 0;
//     while ((n & (n - 1)) != 0)
//     {
//         n = (n & (n - 1));
//         count++;
//     }
//     return count+1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << noofz(n);
// }
// int countSetBits(int n)
//     {
//         ll count=0;
//         // Your logic here
//         for(ll i=1;i<=n;i++)
//         {
//             ll n=i;
//             n=n^0;
//             while(n!=0){
//             if(n&1==1) 
//             count++;
//                 n>>1;}
//         }
//         return count;
//     }
// int main()
// {
//    int n;
//    cin>>n;
//    cout<<countSetBits(n);
// }
int main()
{
    int a,b;
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;

}
