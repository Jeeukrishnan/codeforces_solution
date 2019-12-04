#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, m;
cin>>n>>m;
int p=__gcd(n,m);
n=n/p;
m=m/p;
int ans=0;
while(m%2==0)
{
ans++;
m=m/2;
}
while(m%3==0)
{
    ans++;
    m=m/3;
}
if(m==n)
{

    cout<<ans;
}
else
{
    cout<<"-1";
}
return 0;


}