#include<bits/stdc++.h>
using namespace std;
int main()
{ // pair<int ,int>p;
int s,n;
//pair<int ,int>p(n);
cin>>s>>n;
pair<int ,int>p[n];
for(int i=0;i<n;i++)
{ cin>>p[i].first>>p[i].second ;}
sort(p,p+n);
for(int j=0;j<n;j++)
{if(s>p[j].first)
  {s=s+p[j].second;}

 else
 {
     cout<<"NO";
     return 0;
 }
}

cout<<"YES";}