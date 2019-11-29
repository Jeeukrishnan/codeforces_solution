#include<bits/stdc++.h>
using namespace std;
long long t,m,n,a,b,c,d,p,q;
int main()
{ cin>>t;
//a=b=c=d=0;

while(t--)
{ a=b=c=d=0;


     cin>>m;

while(m--)
             {cin>>p;
                 if(p%2==0)
                  { a++;   }
                 else 
                    {b++;}  }

cin>>n;

while(n--)
{cin>>q;
if(q%2==0)
{ c++; }
else 
    {d++;}  }  
 
 
cout<<a*c+b*d<<endl;}

}






