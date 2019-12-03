#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,m,k;
cin>>n>>m>>k;
while(1)
{
k-=__gcd(n,k);
if(k<0){
cout<<1;
break;}
k-=__gcd(m,k);
if(k<0)
{
cout<<0;
break;}
}
}
 