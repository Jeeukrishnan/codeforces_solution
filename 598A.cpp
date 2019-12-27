#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,sum;
cin>>t;
 
int x;
 
while(t>0)
{
cin>>n;
 
x=log2(n);
 
sum = (n*(n+1)/2)-2*(pow(2,x+1)-1);
 
cout<<sum<<endl;
 
t--;
}
 
}