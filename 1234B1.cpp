#include<bits/stdc++.h>
using namespace std;
int main()
{  long long n,k;
cin>>n>>k;
vector<long long>v;
//vector<long long>it ;
 //std::vector<long long>::iterator it;
while(n--)
{  long long id;
cin>>id;
//it=find(v.begin(),v.end(),id);
//cout<<*it<<endl;
//it=v.end();
//cout<<*it;
if(find(v.begin(),v.end(),id)==v.end())
{    cout<<id;
       if(v.size()==k)
        {v.pop_back();}
        v.insert(v.begin(),id); }
}
  cout<<v.size()<<endl;
  for(auto i : v)
    {cout<<i<<" ";}         
}











