#include<bits/stdc++.h>
using namespace std;
int main()
{int n,k,x,f,t,w=-1000000000;
cin>>n>>k;
for(int i=0;i<n;i++)
{
cin>>f>>t;
if(k<t)
 {x=f-(t-k);}
else
{
    x=f;
}

if(w<x)
 w=x;
}
cout<<w;
}