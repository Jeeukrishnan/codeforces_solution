#include<bits/stdc++.h>
using namespace std;
int main()
{map<string,string>mp;
string a,b,y,x;
int m,n;
cin>>m>>n;
while(n--)
{cin>>a>>b;
   if(b.length()<a.length())
      { y=b; }
    else
     {y=a;}

mp[a]=y;
}

while(m--)
{cin>>x;
cout<<mp[x]<<" ";}

return 0;
}