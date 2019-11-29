#include<bits/stdc++.h>
using namespace std;
int main()
{ int a,d=0;
cin>>a;
int b[a];
int c=0;
for(int h=0;h<a;h++)
{  cin>>b[h];
if(b[h]>=b[h-1])
{ c++;}
   //cout<<c<<endl;}
else 
{c=1;}
d=max(c,d);
//cout<<d;
}
cout<<d;

}