#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll sum=0;
ll m;
cin>>m;
ll j=0;
do{
   ll digit=m%10;
   sum+=(digit*pow(2,j));
   m/=10;
   j++;
}while(m!=0);
cout<<sum;
return 0;
}