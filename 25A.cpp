#include<bits/stdc++.h>
using namespace std;
int main()
{int k,x,n,p,e=0,o=0;
cin>>k;
for (int i = 0; i < k; i++)
{
    cin>>x;
    if(x%2==0)
      { n=i+1;
        e++;}
    else
    {
        p=i+1;
        o++;
    }
}
if(e==1)
{cout<<n;}
if(o==1)
{cout<<p;}


}

