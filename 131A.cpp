#include<bits/stdc++.h>
using namespace std;
int main()
{  string s;
cin>>s;
int n=s.length();
int c=1;
for(int k=1;k<n;k++)
{    if(s[k]>96)
          {c=0;}   }
if(c)
{for( int i = 0; i < n; i++)
		{	s[i] += ( s[i] > 96 ? -32 : 32);}}
cout<<s;        


}
