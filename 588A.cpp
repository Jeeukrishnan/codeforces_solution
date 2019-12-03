#include<bits/stdc++.h>
using namespace std;
int main()
{ int m,a,b;
int p=10000001;
int c=0;
cin>>m;
while(m--)
{ cin>>a>>b;
    p= min(p,b);
    c=c+a*p;}

cout<<c;


}